#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int t,n,i;
int x,ans,tc;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			ans += (x<60?1:0);
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	} 
	return 0;
}