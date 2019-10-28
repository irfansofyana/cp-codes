#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int A[100000];
	bool masih=true;
	
	cin>>n;
	for (i=0;i<n;i++)cin>>A[i];
	i=1;
	while (i<=n-2 && masih){
		if (((A[i]>A[i-1]) && (A[i]>A[i+1])) || ((A[i]<A[i-1]) && (A[i]<A[i+1]))) i++;
		else{
			masih=false;
		}
	}
	if (masih) cout<<"ZIGZAG"<<endl;
	else{
		cout<<A[i-1]<<" "<<A[i]<<" "<<A[i+1]<<endl;
	}
	return 0;
}
