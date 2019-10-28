#include <bits/stdc++.h>
using namespace std;

int n,i,j,m;
int A[105];
int sum;

int main(){
	cin >> n >> m;
	for (i = 0; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	for (i = n-1 ; i>=0 ; i--) {
		sum += A[i];
		j++;
		if (sum>=m) break; 
	}
	cout << j << '\n';
	return 0;
}