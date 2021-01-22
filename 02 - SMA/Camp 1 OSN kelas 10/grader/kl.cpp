#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	string A[10000];
	int  min;
	string temp;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<n-1;i++){
		min=i;
		for (j=i+1;j<n;j++){
			if (A[j]<A[min] && A[j].length()<=A[min].length())
				min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;	
	}
	for (i=0;i<n;i++)
		cout<<A[i]<<endl;
}
