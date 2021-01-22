#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j;
char A[85][85];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
bool cek(int p,int q){
	if (p<0 || q<0 || p>n || q>m ) return false;
	return true;
}
void dfs(int x,int y){
	A[x][y]='#';
	for (int z=0;z<4;z++){
		if (cek(x+dx[z],y+dy[z]) && A[x+dx[z]][y+dy[z]]!='#'){
			A[x+dx[z]][y+dy[z]]='#';
			dfs(x+dx[z],y+dy[z]);
		}
	}
}
int main(){
	cin.tie(0);
	cin >> t;
	while (t--){
		cin >> n >> m;
		memset(A,-1,sizeof A);
		getchar();
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				cin.get(A[i][j]);
			}
			if (i<n-1) getchar();
		}
		for (i=0;i<m;i++){
			if (A[0][i]!='#') dfs(0,i);  
		}
		for (i=0;i<m;i++){
			if (A[n-1][i]!='#') dfs(n-1,i);
		}
		for (i=0;i<n;i++){
			if (A[i][0]!='#') dfs(i,0);
		}
		for (i=0;i<n;i++){
			if (A[i][m-1]!='#') dfs(i,m-1);
		}
		bool ans=false;
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				if (A[i][j]!='#') {
					ans=true; break;
				} 
			}
			if (ans) break;
		}
		cout << (ans==true?"YA":"TIDAK") << endl;
	}
	return 0;
}
