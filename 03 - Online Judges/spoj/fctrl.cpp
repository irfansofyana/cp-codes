#include <bits/stdc++.h>
using namespace std;

int t;
int n,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		while (n>0) {
			ans += (n/5);
			n /= 5;
		}
		cout << ans << '\n';
	}
	return 0;
}