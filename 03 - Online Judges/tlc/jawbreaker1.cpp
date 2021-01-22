#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,b,k,temp,ans;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
int A[30][30];

bool cek(int p,int q){
	if (p<0 || q<0 || p>m || q>n) return false;
	return true;
}
void dfs(int x,int y){
	A[x][y]=-1;
	for (int z=0;z<4;z++){
		if (cek(x+dx[z],y+dy[z]) && A[x+dx[z]][y+dy[z]]==temp && A[x+dx[z]][y+dy[z]]!=-1){
			A[x+dx[z]][y+dy[z]]=-1;
			dfs(x+dx[z],y+dy[z]);
		}
	}
}
int main(){
	cin.tie(0);
	cin >> m >> n;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	cin >> b >> k;
	temp=A[b][k];
	dfs(b,k);
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (A[i][j]==-1) ans++;
		}
	}
	cout << ans*(ans-1) << endl;
	return 0;
}
