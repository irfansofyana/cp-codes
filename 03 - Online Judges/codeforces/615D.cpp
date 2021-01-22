#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

const ll MOD = (ll)1e9 + 7;

int m;
int freq[200005];
vector<ii> arr;
ll depan[200005], belakang[200005], ans;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a, ll b){
	if (b == 0) return 1;
	if (b == 1) return (a%MOD);
	if (b%2 == 0) return sqr(pangkat(a, b/2));
	else return ((a%MOD)*(sqr(pangkat(a, (b-1)/2))))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m;
	for (int i = 0 ; i < m ; i++){
		int x;
		cin >> x;
		freq[x]++;
	}
	for (int i = 2 ; i <= 200000; i++){
		if (freq[i] > 0) arr.pb({i, freq[i]});
	}
	for (int i = 0; i < (int)arr.size(); i++) {
		int j = (int)arr.size()-1-i;
		ll tt = arr[i].se;
		if (i == 0) depan[i] = (tt+ 1)%(MOD-1);
		else depan[i] = (depan[i-1] * (tt + 1))%(MOD-1);
		
		tt = arr[j].se;
		if (j == (int)arr.size()-1) belakang[j] = (tt + 1)%(MOD-1);
		else belakang[j] = (belakang[j + 1] * (tt + 1))%(MOD-1);	
	}
	ans = 1;
	//for (int i = 0 ; i < (int)arr.size(); i++) {
	//	cout << "depan " << depan[i] << " " << "belakang " << belakang[i] << '\n'; 
	//}
	for (int i = 0 ; i < arr.size(); i++) {
		ll atas = 1;
		if ((int)arr.size() == 1) atas = 1;
		else if (i == 0) atas = belakang[1];
		else if (i == (int)arr.size()-1) atas = depan[i-1];
		else atas = (depan[i-1] * belakang[i+1])%(MOD-1);
		ll tmp = ((arr[i].se)*(arr[i].se + 1))/2;
		tmp %= (MOD - 1);
		atas *= tmp;
		ans *= pangkat(arr[i].fi, atas);
		ans %= MOD;
	}
	cout << ans << '\n';
	return 0;
}