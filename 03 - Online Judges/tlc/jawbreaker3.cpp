#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,temp,maks,ans,pindah;
int A[30][30],dipake[30][30];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
pair <int,int> pi;
queue <int> q;
bool cek(int x,int y){
	if (x<0 || y<0 || x>n || y>m ) return false;
	return true;
}

void dfs(int x,int y){
	dipake[x][y]=0;
	for (int z=0;z<4;z++){
		if (cek(x+dx[z],y+dy[z]) && A[x+dx[z]][y+dy[z]]==temp && dipake[x+dx[z]][y+dy[z]]==-1){
			ans++;
			dfs(x+dx[z],y+dy[z]);
		}
	}
}
void jaw(int x,int y){
	A[x][y]=-1;
	for (int z=0;z<4;z++){
		if (cek(x+dx[z],y+dy[z]) && A[x+dx[z]][y+dy[z]]==temp && A[x+dx[z]][y+dy[z]]!=-1){
			jaw(x+dx[z],y+dy[z]);
		}
	}
}
int main(){
	cin >> n >> m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin >> A[i][j];
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			memset(dipake,-1,sizeof dipake);
			temp=A[i][j];
			ans=1;
			dfs(i,j);
			if (i==0 && j==0) {
				maks=ans;
				pi=make_pair(i,j);
			}
			else if (ans>maks) {
				maks=ans;
				pi=make_pair(i,j);
			}
		}
	}
	temp=A[pi.first][pi.second];
	jaw(pi.first,pi.second);
	for (i=0;i<m;i++){
		for (j=n-1;j>=0;j--){
			if (A[j][i]!=-1) q.push(A[j][i]);
		}
		j=n-1;
		while (!q.empty()){
			A[j][i]=q.front();
			q.pop();
			j-=1;
		}
		for (k=0;k<=j;k++) A[k][i]=-1;
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if (j==m-1){
				if (A[i][j]==-1) cout<<'.'<<endl;
				else cout<<A[i][j]<<endl;
			}
			else {
				if (A[i][j]==-1) cout<<'.'<<" ";
				else cout<<A[i][j]<<" ";
			}
		}
	}
	return 0;
}
