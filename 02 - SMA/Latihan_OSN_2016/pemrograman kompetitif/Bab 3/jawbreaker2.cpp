#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[55][55],B[55][55];
int ans,bil,ada;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}

void cari(int x,int y){
	A[x][y] = -1;
	for (int z = 0 ; z < 4; z++) {
		if (cek(x+dx[z],y+dy[z])) {
			if (A[x+dx[z]][y+dy[z]]==bil) {
				ada++;
				cari(x+dx[z],y+dy[z]);
			}
		}
	}
}

void resett(){
	for (int zz =0 ; zz < n ; zz++){
		for (int zzz =0 ; zzz < m;  zzz++){
			A[zz][zzz] = B[zz][zzz];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m; j++){
			cin >> A[i][j];
			B[i][j] = A[i][j];
		}
	ans = -1;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			bil = A[i][j]; ada = 1;
			cari(i,j);
			ans = max(ans,ada*(ada-1));
			resett();
		}
	}
	cout << ans << '\n';
	return 0;
}