#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005];

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) 
		cin >> A[i];
	sort(A,A+n);
	if (A[n-1]==1) A[n-1]=2;
	else A[n-1] = 1;
	sort(A,A+n);
	for (i=0;i<n;i++) {
		if (i==n-1) cout << A[i] << endl;
		else cout << A[i] << " ";
	}
}
