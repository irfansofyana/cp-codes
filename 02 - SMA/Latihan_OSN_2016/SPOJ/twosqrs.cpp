#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i,j;

bool jika(ll n){
	return (ll)sqrt(n)*(ll)sqrt(n) == n ;
}

bool cek(ll n){
	for (ll z = 0 ; z * z <= n ; z++) {
		ll temp = n-z*z;
		if (jika(temp)) return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		if (cek(n)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}