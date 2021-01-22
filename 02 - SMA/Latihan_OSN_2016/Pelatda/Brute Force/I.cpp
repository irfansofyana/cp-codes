#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,a,b,i,j;
ll A[35],B[35];
ll gab[35];
vector<ll> ha,hb;
ll uka,ukb;
ll bil,temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> a >> b;
	for (i = 0 ; i < n ; i++) cin >> gab[i];
	for (i = 0 ; i < (n/2); i++){
		A[i] = gab[i];
	}
	j = 0;
	uka = (n/2);
	for (i = (n/2); i < n ; i++){
		B[j] = gab[i];
		j++;
	}
	ukb = n-(n/2);
	for (i = 0 ; i < (1 << uka); i++){
		ll sum = 0;
		for (j = 0 ; j < uka; j++) {
			if ((i&(1<<j)) > 0) sum += A[j];
		}
		ha.push_back(sum);
	}
	for (i = 0 ; i < (1<<ukb); i++){
		ll sum = 0;
		for (j = 0 ; j < ukb; j++) {
			if ((i&(1<<j)) > 0) sum += B[j];
		}
		hb.push_back(sum);
	}
	sort(ha.begin(),ha.end()); sort(hb.begin(),hb.end());
	ll ans = 0;
	for (i = 0 ; i < ha.size(); i++){
		ll bawah = lower_bound(hb.begin(),hb.end(),a-ha[i])-hb.begin();
		ll atas = upper_bound(hb.begin(),hb.end(),b-ha[i])-hb.begin();
		atas--;
		ans += atas-bawah+1;
	}
	cout << ans << '\n';
	return 0;
}