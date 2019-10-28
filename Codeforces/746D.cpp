#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;
typedef long long ll;

ll n, k, g, b, arr[100005];
bool swapped;

void solve(){
	ll sekat = (g%k == 0 ? g/k : (g/k) + 1);
	if (b < sekat - 1 || b > (sekat + 1)*k) {
		cout << "NO\n";
	}
	else {
		int a = 0;
		if (b <= k*(sekat - 1)) {
			sekat--;
			a = 0;
		}
		else if (b <= k*sekat) {
			a = 1;
		}
		else {sekat++; a = 2;}
		
		for (int i = 1 ; i <= sekat; i++) {
			arr[i] = (i <= (b%sekat) ? (b/sekat) + 1: (b/sekat));
		}

		ll cnt = g;

		if (a == 0) {
			for (int i = 1 ; i <= sekat; i++) {
				for (int j = 0 ; j < min(cnt, k); j++) {
					if (swapped) cout << 'B';
					else cout << 'G';
				}
				cnt -= min(cnt, k);
				for (int j = 0 ; j < arr[i]; j++) {
					if (swapped) cout << 'G';
					else cout << 'B';
				}
			}
			for (int i = 0 ; i < min(cnt, k); i++) {
				if (swapped) cout << 'B';
				else cout << 'G';
			}
			cout << '\n';
		}
		else if (a == 1) {
			for (int i = 1 ; i <= sekat; i++) {
				for (int j = 0 ; j < arr[i]; j++) {
					if (swapped) cout << 'G';
					else cout << 'B';
				}
				for (int j = 0 ; j < min(cnt, k); j++) {
					if (swapped) cout << 'B';
					else cout << 'G';
				}
				cnt -= min(cnt, k);
			}
			cout << '\n';
		}
		else {
			for (int i = 1 ; i <= sekat-1; i++) {
				for (int j = 0 ; j < arr[i]; j++) {
					if (swapped) cout << 'G';
					else cout << 'B';
				}
				for (int j = 0 ; j < min(cnt, k); j++) {
					if (swapped) cout << 'B';
					else cout << 'G';
				}
				cnt -= min(cnt, k);
			}
			for (int i = 0 ; i < arr[sekat]; i++) {
				if (swapped) cout << 'G';
				else cout << 'B';
			}
			cout << '\n';
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> g >> b;
	if (b > g) {
		swap(b,g);
		swapped = true;
	}
	solve();
	return 0;
}