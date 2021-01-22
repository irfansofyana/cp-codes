#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char A[105][105];
int t,ans,tc;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
bool bisa;

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<n) return true;
	return false;
}
void flood(int x,int y){
	if (A[x][y]=='x') {
		bisa = true;
		A[x][y] = '.';
	}
	else A[x][y] = '.';
	for (int z = 0; z < 4 ; z++) {
		if (cek(z+dx[z],y+dy[z])) {
			if (A[x+dx[z]][y+dy[z]]=='@' || A[x+dx[z]][y+dy[z]]=='x') flood(x+dx[z],y+dy[z]);
		}
	}
}
int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n ;
		ans = 0;
		for (i = 0 ; i < n ; i++){
			for (j = 0 ; j < n ; j++)
				cin >> A[i][j];
		}
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				bisa = false;
				if (A[i][j]=='x' || A[i][j] == '@') {
					flood(i,j);
				}
				if (bisa) ans++;
			}
		}
		cout << "Case " << ++tc << ": " << ans << endl;
	}
	return 0;
}