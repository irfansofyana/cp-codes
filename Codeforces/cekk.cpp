#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll N;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> N && N > 0) {
		//priority_queue<ll> pq;		
		priority_queue<ll, vector<ll>, greater<ll> > pq;
		for (int i = 0 ; i < N; i++) {
			ll tmp; 
			cin >> tmp;
			pq.push(tmp);
		}
		ll ans = 0;
		while (!pq.empty()) {
			ll bil1 = pq.top();
			pq.pop();
			if (pq.empty()) break;
			else {
				ll bil2 = pq.top();
				pq.pop();
				//cout << bil1 << " " << bil2 << '\n';
				ans += bil1 + bil2;
				pq.push(bil1 + bil2);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}