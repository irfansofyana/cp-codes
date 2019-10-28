#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int t,n,i,j,tc;
ll ans;

int main(){
	cin >> t;
	while(t--) {
		cin >> n;
		ans = 0;
		for (i = 1 ; i <= n ; i++) {
			for (j = 1 ; j <= n ; j++) {
				int k = n-i-j;
				if (i+j>k && i+k>j && j+k>i) ans++;
			}
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}