#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int A[5000];
int B[5000];

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>n){
		for (i=1;i<=n-1;i++) A[i]=0;=1;i<=n-1;i++){
			A[abs(B[i]-B[i+1])]++
		for (i=1;i<=n;i++){
			cin>>B[i];
		}
		for (i;
		} bool cek=true;
		for (i=1;i<=n-1;i++){
			if (A[i]>1 || A[i]==0) {
				cek=false;
				break;
			}
		}
		cout<<(cek==true?"Jolly":"Not jolly")<<endl;
	}
	return 0;
}
