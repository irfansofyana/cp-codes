#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i,j,k;
	int A[100];
	int keisi=0;
	
	cin>>k;
	while (k!=0){
		for (i=0;i<k;i++) cin>>A[i];
		sort(A,A+k);
		i=0;
		j=k-1;
		for (t=1;t<=k;t++){
			if (t%2==1 && t!=k){
				cout<<A[i]<<" ";
				i++;
			}
			else if (t%2==1) cout<<A[i]<<endl;
			else if (t%2==0 && t!=k){
				cout<<A[j]<<" ";
				j--;
			}
			else if (t%2==0) cout<<A[j]<<endl;
		}
		cin>>k;
	}
	return 0;
}
