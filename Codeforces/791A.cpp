#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	for (int i = 0 ; ; i++) {
		if (a > b) {
			cout << i << '\n';
			return 0;
		}
		a *= 3; b *= 2;
	}
	return 0;
}