#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,q,i,j;
pair<ll,ll> A[100005];
ll awal,x;

ll binser(ll awal,ll akhir) {
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return -1;
	else if (A[mid].first <= x && x <= A[mid].second) return mid;
	else if (x < A[mid].first) return binser(awal,mid-1);
	else if (x > A[mid].second) return binser(mid+1,akhir);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	awal = 1;
	for (i = 1 ; i <= n ; i++) {
		cin >> x;
		//y-awal+1==x
		A[i] = make_pair(awal,awal+x-1);
		awal += x;
	}
	cin >> q;
	while (q--) {
		cin >> x;
		cout << binser(1,n) << '\n';
	}
	return 0;
}