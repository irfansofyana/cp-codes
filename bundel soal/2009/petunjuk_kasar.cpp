#include <bits/stdc++.h>
using namespace std;
char A[300][300];
int n,i,j,m,q;
int dx={-1,1,0,0};
int dy={0,0,1,-1};
string instruksi[300];
void dfs(int x,int y,int instruksi[int k]){
		
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	cin>>q;
	for (i=1;i<=q;i++) cin>>instruksi[q];
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (A[i][j]=='H') dfs(i,j,instruksi[1]);
		}
	}
}
