#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		int x = abs(n);	
		cout << n << " is " << (x%2==0? "even":"odd") << '\n';
	}
	return 0;
}