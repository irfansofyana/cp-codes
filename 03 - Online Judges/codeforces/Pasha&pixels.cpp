#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,a,b,jawab,k;
int A[1000][1000];
bool ditemukan=false;
int main(){
	cin.tie(0);
	cin>>n>>m>>k;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			A[i][j]=0;
		}
	} ditemukan=false;
	for (i=1;i<=k;i++){
		cin>>a>>b;
		A[a-1][b-1]=1;
		if (b==1){
			if (A[a-1][b-1]==1 && A[a-1][b]==1 && A[a][b-1]==1 && A[a][b]==1 && !ditemukan) {
				jawab=i; ditemukan=true;
			}
			else if (A[a-1][b-1]==1 && A[a-1][b]==1 && A[a-2][b-1]==1 && A[a-2][b]==1 && !ditemukan){
				jawab=i; ditemukan=true;
			}
		}
		else if (b==m){
			if (A[a-1][b-1]==1 && A[a-1][b-2]==1 && A[a][b-1]==1 && A[a][b-2]==1 && !ditemukan) {
				jawab=i;
				ditemukan=true;
			}
			else if (A[a-1][b-1]==1 && A[a-1][b-2]==1 && A[a-2][b-1]==1 && A[a-2][b-2]==1 && !ditemukan){
				jawab=i; ditemukan=true;
			}
		}
		else{
			if (A[a-1][b-1]==1 && A[a-1][b]==1 && A[a][b-1]==1 && A[a][b]==1 && !ditemukan) {
				jawab=i; ditemukan=true;
			}
			else if (A[a-1][b-1]==1 && A[a-1][b-2]==1 && A[a][b-1]==1 && A[a][b-2]==1 && !ditemukan) {
				jawab=i; ditemukan=true;
			}
			else if (A[a-1][b-1]==1 && A[a-1][b]==1 && A[a-2][b-1]==1 && A[a-2][b]==1 && !ditemukan){
				jawab=i; ditemukan=true;
			}
			else if (A[a-1][b-1]==1 && A[a-1][b-2]==1 && A[a-2][b-1]==1 && A[a-2][b-2]==1 && !ditemukan){
				jawab=i; ditemukan=true;
			}
		}
	}
	/*for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	} */
	cout<<jawab<<endl;
	return 0;
}
