#include <bits/stdc++.h>
using namespace std;
int t,n,i,j;
int dx={-1,1,0,0};
int dy={0,0,1,-1};
char A[110][110];
bool kunjungan[110][110];
void dfs(int x,int y){
	for (int z=0;z<4;z++){
		if (x+dx[z]>=0 && x+dx[z]<n && y+dy[z]>=0 && y+dy[z]<m){
			if (!kunjungan[x+dx[z]][y+dy[z]]){
				if (A[x+dx[z]][y+dy[z]]=='.') {
					dfs(x+dx[z],y+dy[z]);
				}
				else 
			}
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		cin>>n>>m;
		memset(kunjungan,false,sizeof(kunjungan));
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				cin>>A[i][j];
			}
		}
	}
}
