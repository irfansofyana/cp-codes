#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll ans;
ll A[10005];
ll ada[10005];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		A[j]++;
	}
	for (i = 0 ; i < m ; i++) {
		cin >> j;
		ada[j]++;
	}
	for (i = 1 ; i <= 10000; i++) {
		ll mini;
		mini = min(A[i],ada[i]);
		ans += mini;
		ada[i] -= mini; 
		A[i] -= mini;
		ll minii;
		minii = min(A[i],ada[i+1]);
		ans += minii;
		ada[i+1] -= minii;
	}
	cout << ans << '\n';
	return 0;
}