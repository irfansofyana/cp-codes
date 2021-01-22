#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j,k,banyak,tot,awal,idx;
int dx[]={1,-1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
int dikunjungi[100][100];
int kena[100][100];
char A[100][100],temp;
bool ans=true;
void dfs(int x,int y){
	for (int z=0;z<8;z++){
		if ((x+dx[z]>=0 && x+dx[z]<n) && (y+dy[z]>=0 && y+dy[z]<m)) {
			if (dikunjungi[x+dx[z]][y+dy[z]]==0 && A[x+dx[z]][y+dy[z]]!='#') {
				dikunjungi[x+dx[z]][y+dy[z]]=1;
				kena[x+dx[z]][y+dy[z]]=-1;
				dfs(x+dx[z],y+dy[z]);
			}
		}
	}
}
int main(){
	cin.tie();
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n>>m;
		memset(kena,0,sizeof(kena));
		memset(dikunjungi,0,sizeof(dikunjungi));
		getchar();
		for (j=0;j<n;j++){
			for (k=0;k<m;k++)
				cin.get(A[j][k]); 
			if (j<n-1) getchar();
		}
		for (j=0;j<m;j++){
			if (A[0][j]!='#') dfs(0,j);
		}
		for (j=0;j<m;j++){
			if (A[n-1][j]!='#') dfs(n-1,j);
		}
		for (j=0;j<n;j++){
			if (A[j][0]!='#') dfs(j,0);
		}
		for (j=0;j<n;j++){
			if (A[j][m-1]!='#') dfs(j,m-1);
		} banyak=0; ans=false; tot=0;
		/*for (j=0;j<n;j++){
			for (k=0;k<m;k++){
				cout<<kena[j][k];
			}
			cout<<endl;
		} */ 
		for (j=0;j<n;j++){
			for (k=0;k<m;k++){
				if (A[j][k]!='#' && kena[j][k]==0){
					ans=true;
					break;
				}
			}
		}
		cout<<(ans==true?"YA":"TIDAK")<<endl;
	}
	return 0;
}
