#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll maks,mini,n,i,j;
ll d;
pair<ll,ll> A[1005];

ll pangkat(ll a,ll b){
	ll ret = 1;
	for (int z = 1; z <= b; z++){
		ret *= a;
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> d;
	for (i = 0 ; i < n ;i++) {
		ll x,y;
		cin >> x >> y;
		A[i] = make_pair(x,y);
	}
	for (i = 0 ; i < n-1; i++) {
		for (j = i+1; j < n ; j++) {
			ll nilai;
			nilai = pangkat(abs(A[j].first-A[i].first),d)+pangkat(abs(A[j].second-A[i].second),d);
			if (i==0 && j==1) {
				maks = nilai ; mini = nilai;
			}
			else {
				maks = max(maks,nilai);
				mini = min(mini,nilai);
			}
		}
	}
	cout << mini << " " << maks << '\n';
	return 0;
}