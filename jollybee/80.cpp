#include <bits/stdc++.h>
using namespace std;

int t,n;

int main(){
	cin >> t;
	while (t--) {
		cin >> n;
		int i = n-2;
		cout << (n*n*n)-(i*i*i) << '\n';
	}
	return 0;
}