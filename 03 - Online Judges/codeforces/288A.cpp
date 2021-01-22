#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, k;
string ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	if (n < k) {
		cout << -1 << '\n';  
		return 0;
	}
	if (k == 1 && n > 1) {
		cout << -1 << '\n';
		return 0;
	}
	if (n == 1) {
		cout << "a" << '\n';
		return 0;
	}
	ans = "";
	if (k == 2) {
		for (int i = 0 ; i < n ; i++) {
			if (i%2 == 0) cout << 'a';
			else cout << 'b';
		}
		cout << '\n';
	}
	else {
		for (int i = 0 ; i < n-(k-2); i++) {
			if (i%2 == 0) cout << 'a';
			else cout << 'b';
		}
		for (int i = 2; i < k ; i++) {
			//ans = ans+char(i+'a');
			cout << char(i+'a');
		}
		//cout << ans << '\n';
		cout << '\n';
	}
	return 0;
}