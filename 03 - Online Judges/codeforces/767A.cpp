#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, arr[100005];
int now;
priority_queue<int> pq;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	now = n;
	for (int i = 0 ; i < n ; i++) {
		vector<int> jaw;
		if (arr[i] == now) {
			jaw.pb(arr[i]);
			now--;
		}
		else pq.push(arr[i]);
		while (!pq.empty()) {
			int sk = pq.top();
			if (now == sk) {
				jaw.pb(sk);
				pq.pop();
				now--;
			}
			else break;
		}
		for (int j = 0 ; j < jaw.size(); j++) {
			if (j == 0 ) cout << jaw[j];
			else cout << " " << jaw[j];
		}
		cout << '\n';
	}
	return 0;
}