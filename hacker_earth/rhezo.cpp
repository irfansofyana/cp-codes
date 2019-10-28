#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;

ll a,ans,tmp,kali;
string s;
ll i;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	if (b == 1) return a%MOD;
	if (b%2 == 0) return (sqr(pangkat(a,b/2)));
	if (b%2 == 1) return ((a%MOD)*sqr(pangkat(a,(b-1)/2)))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> s;
	kali = 1;
	for (i = (ll)s.size()-1; i >= 0 ; i--) {
		tmp += kali * (s[i]-'0');
		tmp %= (MOD - 1);
		kali *= 10; kali %= (MOD-1);
	}
	//cout << tmp << endl;
	cout << pangkat(a,tmp) << '\n';
	return 0;
}