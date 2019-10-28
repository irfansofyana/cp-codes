#include <bits/stdc++.h>
using namespace std;
int r,c,i,j,tot;
char A[1010][1010];
int dikunjungi[1010][1010];
int dfs(int b,int x,int y){
	
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>r>>c;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			cin>>A[i][j];
		}
	}
	for (i=0;i<r;i++){
		memset(dikunjungi,0,sizeof(dikunjungi));
		if (A[i][0]!='#'){
			dfs()
		}
	}
}
