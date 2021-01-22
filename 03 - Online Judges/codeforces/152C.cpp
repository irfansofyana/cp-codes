#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[30];
string s[105];

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) 
		cin >> s[i];
	ll ans = 1;
	for (int i = 0 ; i < m; i++) {
		memset(arr, 0, sizeof arr);
		for (int j = 0 ; j < n ; j++) 
			arr[s[j][i]-'A']++;
		ll dist = 0;
		for (int j = 0 ; j < 26; j++) 
			if (arr[j] > 0) dist++;
		ans *= dist;
 		if (ans > MOD) ans %= MOD;
 	}
 	cout << ans << '\n';
	return 0;
}