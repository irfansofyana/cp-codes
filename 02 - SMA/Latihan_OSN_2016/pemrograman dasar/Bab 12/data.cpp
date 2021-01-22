#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,x,y;
ll A[100005];
ll ans1,ans2;

ll binser1(ll awal,ll akhir) {
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return ans1;
	if (A[mid] <= x) return binser1(mid+1,akhir);
	if (A[mid] > x) {
		ans1 = min(ans1,mid);
		return binser1(awal,mid-1);
	}
}

ll binser2(ll awal,ll akhir) {
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return ans2;
	if (A[mid] > y) return binser2(awal,mid-1);
	if (A[mid] <= y) {
		ans2 = max(ans2,mid);
		return binser2(mid+1,akhir);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	int q;
	cin >> q;
	while (q--) {
		cin >> x >> y;
		ans1 = 1000000; ans2 = -1;
		ll _fi = binser1(0,n-1);
		ll _se = binser2(0,n-1);
		//cout << _fi << " " << _se << '\n';
		if (ans2==-1 || ans1 == 1000000) cout << 0 << '\n';
		else cout << _se-_fi+1 << '\n';
	}
	return 0;
}