#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const int N = 10000;

ll n,k,l,i,j;
ll t;
priority_queue<ll> pq;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (i = 1 ; i <= n ; i++) {
			pq.push(i);
		}
		while (k--) {
			i = pq.top();
			pq.pop();
			pq.push((ll)sqrt(i));
		}
		ll ans = 0;
		while (!pq.empty()) {
			ans += pq.top();
			pq.pop();
		}
		cout << ans << '\n';
	}
	return 0;
}
