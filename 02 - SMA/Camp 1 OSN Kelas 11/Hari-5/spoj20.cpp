#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,s1,s2;
int A[105],B[105];

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ;i++) {
		cin >> A[i];
		s1 += A[i];
	}
	cin >> m;
	for (i = 0 ; i < m ; i++){
		cin >> B[i];
		s2 += B[i];
	}
	if (s1 > s2) {
		for (i = 0 ; i < n ; i++) {
			cout << A[i];
			if (i!=n-1) cout << " " ;
			else cout << endl;
		}
	}
	else {
		for (i = 0; i < m ; i++) {
			cout << B[i];
			if (i!=m-1) cout << " ";
			else cout << endl;
		}
	}
	return 0;
}