#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int A[1000];
	int keuntungan=0;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	i=0;
	while ((i<n-1)){
		if (A[i]>2*A[i+1]){
			keuntungan=keuntungan+(A[i]-2*A[i+1]);
			i=i+2;
		}
		else
			i++;
	}
	cout<<keuntungan<<endl;
}
