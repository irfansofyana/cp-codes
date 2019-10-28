#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n;
	while (n--) {
		cin >> x;
		if (x < 38) {
			cout << x << '\n';
			continue;
		}
		int nxt;
		nxt = x + (5 - (x%5));
		if (nxt - x < 3) cout << nxt << '\n';
		else cout << x << '\n';
	}
	return 0;
}