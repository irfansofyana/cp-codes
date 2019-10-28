#include <bits/stdc++.h>
using namespace std;

long long n,i,j,x;
long long A[7];

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		A[i%7] += x;
	}
	for (i = 0 ; i < 7 ; i++) cout << A[i] << endl;
	return 0;
}