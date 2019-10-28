#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int t;
ll n,i,j,ans;
ll nilai1,nilai2;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (i = 0 ; i * i * i * i <= n; i++) {
			nilai1 = n - i * i * i * i;
			for (j = 0; j * j * j <= nilai1 ; j++) {
				nilai2 = nilai1 - j * j * j;
				ans += (ll)sqrt(nilai2) + 1;
			}
		}
		cout << ans <<'\n';
	}
	return 0;
}
