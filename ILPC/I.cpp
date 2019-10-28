#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll dist[1000005];
ll n,m,i,t,j;
queue<ll> antrian;

ll balik(ll x){
	ll res = 0;
	while (x > 0) {
		res = 10 * res + (x%10);
		x /= 10;
	}
	return res;
}

void BFS(){
	for (i = 1; i <= 1000000; i++) {
		dist[i] = (ll)1e18;
	}
	dist[1] = 1; 
	antrian.push(1);
	while (!antrian.empty()) {
		ll noww = antrian.front();
		antrian.pop();
		if (noww == 1000000) break;
		if (dist[noww] + 1 < dist[noww + 1]) {
			antrian.push(noww + 1);
			dist[noww + 1] = dist[noww] + 1;
		}
		ll bb = balik(noww);
		if (dist[noww] + 1 < dist[bb]){
			antrian.push(bb);
			dist[bb] = dist[noww] + 1;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	BFS();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << dist[n] << '\n';
	}
	return 0;
}