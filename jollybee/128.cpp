#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t,tc=0;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "Kasus #" << ++tc << ": " << (n%2==0?"TIDAK CINTA":"CINTA") << '\n';
	}
	return 0;
}