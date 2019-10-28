#include <bits/stdc++.h>
using namespace std;

int n,i,j,idx1,idx2;
char A[1000][1000];
bool udah;
int main(){
	cin.tie(0);
	cin>>n;
	if (n<=4){
		for (i=1;i<=n;i++){
			for (j=1;j<=n;j++){
				cout<<'*';
			}
			cout<<endl;
		}
	}
	else{
		for (i=0;i<n;i++){
			A[0][i]='*';
		}
		idx1=1; idx2=n-2;
		udah=false;
		for (i=0;i<n;i++){
			A[n-1][i]='*';
		}
		for (i=1;i<n-1;i++){
			for (j=0;j<n;j++){
				if (j==0 || j==n-1) A[i][j]='*';
				else if (j==idx1 || j==idx2){
					A[i][j]='*';
					if (idx1==idx2) udah=true;
				}
			}
			if (udah){
				idx1--;
				idx2++;
			}
			else{
				idx1++;
				idx2--;
			}
		}
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				cout<<A[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
