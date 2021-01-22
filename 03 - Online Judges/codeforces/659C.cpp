#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,m;
ll A[100005];
ll noww,idx;
ll ans,kiri,kanan,beda;
vector<pair<ll,ll> > jaw;

ll binser(ll l,ll r){
	if (l > r) return noww;
	ll mid = (l+r)/2;
	ll smt = mid-beda;
	if ((smt*(2*kiri+smt-1))/2 <= m) {
		noww = mid;
		return binser(mid+1,r);
	}
	else return binser(l,mid-1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	for (i = 0 ; i < n && m > 0 ; i++) {
		noww = 0;
		if (i==0) {
			kiri = 1; kanan = A[i]-1; beda = 0;
			idx = 0;
			if (kiri<=kanan) {
				idx = binser(kiri,kanan);
				m -= (idx*(2*kiri+idx-1))/2;
			}
			//cout << idx << '\n';
			if (idx!=0) {
				jaw.push_back(make_pair(kiri,kiri+idx-1));
			}
			ans += idx;
		}
		else {
			kiri = A[i-1]+1; kanan = A[i]-1; beda = A[i-1];
			idx = 0;
			if (kiri<=kanan) {
				if (binser(kiri,kanan)!=0) idx = binser(kiri,kanan)-beda;
				m -= (idx*(2*kiri+idx-1))/2;
			}
			//cout << idx << '\n';
			if (idx!=0) {
				jaw.push_back(make_pair(kiri,kiri+idx-1));
			}
		    ans += idx;
		}
		noww = 0;
		if (i==n-1 && m > 0) {
			idx = 0;
			kiri = A[i]+1; kanan = kiri+100000; beda = A[i];
			if (binser(kiri,kanan)!=0) idx = binser(kiri,kanan)-beda;
			m -= (idx*(2*kiri+idx-1))/2;
			//cout << idx << '\n';
			if (idx!=0) {
				jaw.push_back(make_pair(kiri,kiri+idx-1));
			}
			ans += idx;
		}
	}
	cout << ans << '\n';
	for (i = 0 ; i < jaw.size(); i++){
		for (j = jaw[i].first ;j <= jaw[i].second; j++) {
			cout << j ;
			cout << ((i==jaw.size()-1 && j==jaw[i].second) ? '\n':' ');
		}
	}
	return 0;
}