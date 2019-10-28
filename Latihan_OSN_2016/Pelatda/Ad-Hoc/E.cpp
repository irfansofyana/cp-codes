#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,m,i,j;
ll l,r,val,q;
ll temp[10005];
ll A[10005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(temp,0,sizeof temp);
		while (m--) {
			cin >> l >> r >> val;
			temp[l] += val; temp[r+1] -= val;
		}
		ll sum = 0;
		for (i = 0 ; i < n ; i++) {
			sum += temp[i];
			A[i] = sum;
		}
		cin >> q;
		while (q--) {
			ll x;
			cin >> x;
			cout << A[x] << '\n';
		}
	}
	return 0;
}