#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, k;
map<ll,bool> udah;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	if (n == 1 && k!=0) {
		cout << -1 << '\n';
		return 0;
	}
	if (n == 1) {
		cout << 1 << '\n';
		return 0;
	}
	ll bil = n/2;
	if (bil > k) cout << -1 << '\n';
	else {
		ll bagian = k/bil;
		ll sisa = k%bil;
		ll idx = 1;
		for (int i = 0; i < bil; i++) {
			if (i >= bil-sisa) {
				if (i == 0) {
					cout << (bagian+1)*idx << " " << (bagian+1)*(idx+1);
				}
				else cout << " " << (bagian+1)*idx << " " << (bagian+1)*(idx+1);
				udah[(bagian+1)*idx] = true; udah[(bagian+1)*(idx+1)] = true;
			}
			else {	
				if (i == 0) {
					cout << bagian*idx << " " << bagian*(idx+1);
				}
				else cout << " " << bagian*idx << " " << bagian*(idx+1);
				udah[bagian*idx] = true; udah[bagian*(idx+1)] = true;
			}
			idx+=2;
		}
		if (n%2 == 1) {
			for (int i = 1; ; i++) {
				if (!udah[i]) {
					cout <<" "<< i << '\n';
					return 0;
				}
			}
		} 
		else cout << '\n';
	}
	return 0;
}