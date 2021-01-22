#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[10000];

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++){
		cin >> A[i];
	}
	sort(A,A+n);
	if (A[0]==1) cout << -1 << endl;
	else cout << A[0]-1 << endl;
}
