#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long A[50];

int main(){
	cin.tie(0);
	A[1] = 2; A[2] = 2;
	for (i = 3 ; i<=45 ; i++)
		A[i] = A[i-1]+A[i-2];
	cin >> n;
	cout << A[n] << endl;
	return 0;
}