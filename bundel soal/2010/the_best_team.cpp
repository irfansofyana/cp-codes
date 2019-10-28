#include <bits/stdc++.h>
using namespace std;
int t,i,j,k;
int n,maks;
int A[55][55];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		cin>>n;
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		bool pertama=true;
		for (i=0;i<=n-3;i++){
			for (j=i+1;j<=n-2;j++){
				for (k=j+1;k<=n-1;k++){
					if (pertama){
						maks=A[i][j]*A[i][k]*A[j][k];
						pertama=false;
					}
					else {
						if (A[i][j]*A[i][k]*A[j][k]>maks) maks=A[i][j]*A[i][k]*A[j][k];
					}
				}
			}
		}
		cout<<maks<<endl;
	}
	return 0;
}
