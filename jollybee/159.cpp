#include <bits/stdc++.h>
using namespace std;

int t,tc,n,x,m;
int ans,i;

int main(){
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			ans += ((x<=m)?1:0);
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}