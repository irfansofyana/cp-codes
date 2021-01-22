#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,n;
	string s;
	cin >> t;
	while (t--) {
		cin >> s >> n;
		if (s == "next") {
			cout << (n - 1 + 100)%100 << '\n';
		}
		else cout << (n + 1)%100 << '\n';
	}
	return 0;
}
