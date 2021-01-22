#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

map<ll,bool> bisa;
ll n;

void isi(){
	ll bil = 1;
	for (int i = 1; i <= 30; i++) {
		bisa[(2*bil-1)*bil] = true;
		cout << (2*bil-1)*bil << '\n';
		bil <<= 1;
		//cout << bil << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> n;
	for (int i = n; i >=1 ; i--) {
		if (n%i == 0 && bisa[i]) {
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}