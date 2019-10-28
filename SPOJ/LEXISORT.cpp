#include <bits/stdc++.h>
using namespace std;

int k,n,i,j;
string A[50000];

int main(){
	cin >> k;
	while (k--) {
		cin >> n;
		for (i=0;i<n;i++) cin >> A[i];
		sort(A,A+n);
		for (i=0;i<n;i++) cout << A[i] << endl;
	}
	return 0;
}