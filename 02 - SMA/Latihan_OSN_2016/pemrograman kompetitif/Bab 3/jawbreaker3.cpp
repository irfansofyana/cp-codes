#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int A[55][55],B[55][55];
int ans,bil,ada;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
vector<int> pindah;

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
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			bil = A[i][j]; ada = 1;
			cari(i,j);
			if (ada*(ada-1)==ans) break;
			else resett();
		}
		if (ada*(ada-1)==ans) break;
	}
	
	for (i = 0 ; i < m ; i++) {
		for (j = n-1; j >= 0 ; j--) {
			if (A[j][i]==-1) {	// baris j-1 ke atas pasti jatuh
				pindah.clear();
				for (k = j-1; k >= 0 ; k--) {
					if (A[k][i]!=-1) {
						pindah.push_back(A[k][i]);
						A[k][i] = -1;
					}
				}
				int idxx = j;
				for (k = 0 ; k < pindah.size(); k++){
					A[idxx][i] = pindah[k];
					idxx--;
				}
			}
		}
	}
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++){
			if (A[i][j]==-1) cout << '.';
			else cout << A[i][j];
			cout << (j==m-1?'\n':' ');
		}
	}
	return 0;
}