#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

long long n,i,j;
long long A[55];

int main(){
	OPTIMASI
	A[1] = 1; A[2] = 2;
	for (i = 3 ; i<= 50 ; i++) A[i] = A[i-1]+A[i-2];
	while (cin >> n && n!=0) {
		cout << A[n] << '\n';
	}
	return 0;
}