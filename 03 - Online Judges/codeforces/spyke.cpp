#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j,banyak=0;
	long long A[1000];
	bool p=false;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	A[n]=A[n-1];
	i=0;
	while ((i<n-1)){
		if ((A[i]==A[i+1]) && (A[i+1]!=A[i+2]))
			{
				p=true;
				banyak++;
				i++;
			}
		else
		i=i+1;
	}
	if ((p==false) && (n!=1))
		banyak=-1;
	cout<<banyak<<endl;
}