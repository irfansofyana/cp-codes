#include <bits/stdc++.h>
using namespace std;
int n,i,j,m,banyak=0;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char A[100][100];

void dfs(int x,int y){
	if (A[x][y]!='k' && A[x][y]!='z'){
		A[x][y]='z';
		for (int it=0;it<4;it++){
			if ((x+dx[it]>=0 && x+dx[it]<n) && (y+dy[it]>=0 && y+dy[it]<n))
				dfs(x+dx[it],y+dy[it]);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			dfs(i,j);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (A[i][j]=='z')
				banyak++;
		}
	}
	cout<<banyak<<endl;	
}
