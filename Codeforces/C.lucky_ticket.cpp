#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[3];
long long temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>temp;
		A[temp%3]++;
	}
	cout<<A[0]/2+min(A[1],A[2])<<endl;
}
