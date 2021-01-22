#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

ll n,m,i,j,k,l;
ll A[55][55];
ll B[55][55];
ll co[55][55];
ll nilai,ada,tot1,tot2;
ll dx[]={0,0,-1,1};
ll dy[]={1,-1,0,0};
ll ans;

void _input(){
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m ; j++){
			cin >> A[i][j];
			B[i][j] = A[i][j];
		}
}

void _reset1(){
	int idx,idxx;
	for (idx = 0 ; idx < n ; idx++) {
		for (idxx =0 ; idxx < m ; idxx++) {
			A[idx][idxx] = B[idx][idxx];
		}
	}
}

bool cek(ll x,ll y){
	if (x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}

void cari(ll x,ll y){
	A[x][y] = -1;
	for (ll z = 0 ; z < 4; z++) {
		if (cek(x+dx[z],y+dy[z])){
			if (A[x+dx[z]][y+dy[z]]==nilai) {
				ada++;
				cari(x+dx[z],y+dy[z]);
			}
		}
	}
}

void runtuhkan(){
	ll z,zz,zzz;
	vector<ll> pindah;
	
	for (z = 0; z < m ; z++) {
		for (zz = n-1; zz >= 0 ; zz--) {
			if (A[zz][z]==-1) {
				pindah.clear();
				for (zzz = zz-1; zzz >= 0 ; zzz--) {
					if (A[zzz][z]!=-1) {
						pindah.push_back(A[zzz][z]);
						A[zzz][z] = -1;
					}
				}
				ll z_ = zz;
				for (zzz = 0 ; zzz < pindah.size(); zzz++){
					A[z_][z] = pindah[zzz];
					z_--;
				}
			}
		}
	}
}

void _copy(){
	ll z,zz;
	for (z = 0 ; z < n ; z++){
		for (zz =0 ; zz < m ; zz++) {
			co[z][zz] = A[z][zz];
		}
	}
}

void _reset2(){
	ll z,zz;
	for (z = 0 ; z < n ; z++) {
		for (zz =0; zz < m ; zz++){
			A[z][zz] = co[z][zz];
		}
	}
}

void _print(){
	int idx,idxx;
	for (idx = 0 ; idx < n ; idx++) {
		for (idxx = 0 ; idxx < m ; idxx++) {
			cout << A[idx][idxx] << " ";
		}
		cout << '\n';
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	_input();
	ans = 0;
	
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < m ; j++) {
			nilai = A[i][j];  ada = 1; tot1 = 0;
			cari(i,j); tot1 += ada*(ada-1);
			runtuhkan();
			_copy();
			bool adaa = false;
			for (k = 0 ; k < n ; k++) {
				for (l = 0 ; l < m ; l++) {
					if (A[k][l]!=-1) {
						adaa = true;
						nilai = A[k][l]; ada = 1;  tot2 = 0;
						cari(k,l); tot2 += ada*(ada-1);
						ans = max(ans,tot1+tot2);
						//runtuhkan();
						_reset2();
					}
				}
			}
			if (!adaa) ans = max(ans,tot1);
			_reset1();
		}
	}
	cout << ans << '\n';
	return 0;
}