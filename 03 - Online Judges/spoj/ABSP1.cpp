#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const int N = 10000;

int t;
ll n,arr[N + 5],i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		ll ans = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			if (i == 0) arr[i] = j;
			else arr[i] = arr[i-1] + j;
			if (i > 0) ans += j*i-arr[i-1]; 
		}
		cout << ans << '\n';
	}
	return 0;
}
