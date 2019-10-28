#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int t;
ll n, k, d1, d2;
ll a, b, c; 
bool ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k >> d1 >> d2;
		if (n%3 != 0) {
			cout << "no\n";
			continue;
		}
		ans = false;
		if (k - 2*d2 - d1 >= 0 && (k-2*d2-d1)%3 == 0) {
			c = (k-2*d2-d1)/3;
			a = d1 + d2 + c;
			b = c + d2;
			//cout << a << " " << b << " " << c << '\n';
			if (a >= 0 && a <= n/3 && b >= 0 && b <= n/3 && c >=0 && c <= n/3) ans = true;
		}		
		if (k - d1 - d2 >= 0 && (k-d1-d2)%3 == 0) {
			b = (k-d1-d2)/3;
			a = d1 + b;
			c = d2 + b;
			//cout << a << " " << b << " " << c << '\n';
			if (a >= 0 && a <= n/3 && b >= 0 && b <= n/3 && c >=0 && c <= n/3) ans = true;
		}
		if (k +d1 + d2 >= 0 && (k+d1+d2)%3 == 0) {
			b = (k+d1+d2)/3;
			a = b-d1;
			c = b-d2;
		//	cout << a << " " << b << " " << c << '\n';
			if (a >= 0 && a <= n/3 && b >= 0 && b <= n/3 && c >=0 && c <= n/3) ans = true;
		}
		if (k + 2*d2 + d1 >= 0 && (k+2*d2+d1)%3 == 0) {
			c = (k+2*d2+d1)/3;
			b = c-d2;
			a = c-d2-d1;
		//	cout << a << " " << b << " " << c << '\n';
			if (a >= 0 && a <= n/3 && b >= 0 && b <= n/3 && c >=0 && c <= n/3) ans = true;
		}
		cout << (ans ? "yes" : "no") << '\n';
	}
	return 0;
}