#include <bits/stdc++.h>
using namespace std;

char A[20][20];
int makan[20][20];
int n,m,i,j,ans;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};

bool cek(int x,int y){
	if (x<0 || y<0 || x>n || y>m ) return false;
	return true;
}
int main(){
	cin >> n >> m;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			cin>>A[i][j];
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (A[i][j]=='P') {
				for (int z=0;z<4;z++){
					if (cek(i+dx[z],j+dy[z]) && A[i+dx[z]][j+dy[z]]=='W' && makan[i+dx[z]][j+dy[z]]==0){
						A[i][j]='U';
						ans++;
						makan[i+dx[z]][j+dy[z]] = 1;
						break;
					}	
				}
			}
		}
	}
	cout << ans << endl;
}
