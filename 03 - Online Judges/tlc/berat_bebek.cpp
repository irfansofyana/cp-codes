#include <bits/stdc++.h>
using namespace std;
int main(){
	int A[100000];
	int n,i,j,temp;
	
	i=0;
	memset(A,0,sizeof(A));
	cin>>temp;
	while (cin){
		if (temp!=0){
			A[i]=temp;
			i++;
		}
		else{
			sort(A,A+i);
			cout<<A[0]<<" "<<A[i-1]<<endl;
			i=0;
		}
		cin>>temp;
	}
	sort(A,A+i);
	cout<<A[0]<<" "<<A[i-1]<<endl;
	i=0;
}
