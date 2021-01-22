#include <bits/stdc++.h>
using namespace std;

int t,a,b;

int main(){
	int tc = 0;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << "Kasus #" << ++tc << ": " << a*b << '\n';
	}
	return 0;
}
