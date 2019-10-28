#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int A[20];
	bool p;
	cin>>n;
	for (i=0;i<n;i++)
		A[i]=i+1;
	do{
		p=true;
		for (i=1;i<n-1;i++){
			if (!((A[i]<A[i-1]) && (A[i]<A[i+1]) || ((A[i]>A[i-1]) && (A[i]>A[i+1]))))
				p=false;
			if (p==false)
				break;	
		}
		if (p){
			for (i=0;i<n;i++)
				cout<<A[i];
			cout<<endl;
		}
	}while (next_permutation(A,A+n));
}
