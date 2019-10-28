#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,z,ans;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
char A[20][20];

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) 
		for (j = 0 ; j < m ; j++) 
			cin >> A[i][j];
	for (i = 0 ;i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			if (A[i][j]=='W'){
				for (z = 0 ; z < 4 ; z++) {
					if (cek(i+dx[z],j+dy[z])) {
						if (A[i+dx[z]][j+dy[z]]=='P' && A[i][j]=='W') {
							ans++;
							A[i+dx[z]][j+dy[z]] = '.';
							A[i][j] = '.';
						}
					}
				}
			} 
		}
	}
	cout << ans << endl;
	return 0;
}