#include <bits/stdc++.h>
using namespace std;
int main(){
	int temp,n,i,j;
	int min;
	int A[1000];
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<n-1;i++){
		min=i;
		for (j=i+1;j<n;j++){
			if (A[j]<A[min])
				min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	for (i=0;i<n;i++){
		if (i!=n-1)
			cout<<A[i]<<" ";
		else
			cout<<A[i]<<endl;
	}
}
