#include <bits/stdc++.h>
using namespace std;

int n,i,j,temp,ans,maks=0,m;
int A[30][30],dikunjungi[30][30];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};

bool cek(int x,int y){
	if (x<0 || y<0 || x>n || y>m ) return false;
	return true;
}

int dfs(int x,int y){
	dikunjungi[x][y]=0;
	for (int z=0;z<4;z++){
		if (cek(x+dx[z],y+dy[z]) && A[x+dx[z]][y+dy[z]]==temp && dikunjungi[x+dx[z]][y+dy[z]]==-1){
			ans++;
			dikunjungi[x+dx[z]][y+dy[z]]=0;
			dfs(x+dx[z],y+dy[z]);
		}
	}
}
int main(){
	cin >> n >> m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++) 
			cin >> A[i][j];
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			memset(dikunjungi,-1,sizeof dikunjungi);
			temp=A[i][j];
			ans=1;
			dfs(i,j);
		//	cout<< ans << endl;
			if (ans>maks) maks=ans;
		}
	}
	cout << maks*(maks-1) << endl;
}
