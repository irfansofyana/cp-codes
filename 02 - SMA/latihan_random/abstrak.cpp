#include <bits/stdc++.h>
using namespace std;
char A[300][300];
int n,m,i,j,ans;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for (i=0;i<n;i++){
		j=0;
		while (j<n-1){
			if (A[i][j]=='/' && A[i][j+1]=='\\'){
				ans++;
				j+=2;
			}
			else j++;
		}
	}
	cout<<ans<<endl;
}
