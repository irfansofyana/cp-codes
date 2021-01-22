#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
ll bb,bs,bc;
ll hb,hs,hc;
ll nb,ns,nc;
ll uang,i,j;

bool bisa(ll x){
	ll butuhb,butuhs,butuhc;
	butuhb = max(x*bb-nb,(ll)0);
	butuhc = max(x*bc-nc,(ll)0);
	butuhs = max(x*bs-ns,(ll)0);
	if (butuhb*hb + butuhc*hc + butuhs*hs <= uang) return true;
	return false;
}

ll binser(ll l,ll r){
	ll ret;
	while (l<=r) {
		ll mid = (l+r)/2;
		if (bisa(mid)) {
			ret = mid;
			l = mid+1;
		}
		else r = mid-1;
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (i = 0 ; i < s.size(); i++){
		if (s[i]=='B') bb++;
		else if (s[i]=='S') bs++;
		else bc++;
	}
	cin >> nb >> ns >> nc;	//yang ada
	cin >> hb >> hs >> hc;	//harga di warung
	cin >> uang;
	cout << binser(0,10000000000000) << '\n';
	return 0;
}