#include <bits/stdc++.h>

using namespace std;

int n, m;
double ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	ans = 1e18;
	for (int i = 0 ; i < n ; i++) {
		int x, y;
		cin >> x >> y;
		ans = min(ans, ((1.0*x)/y)*1.0*m);
	}
	cout << fixed << showpoint << setprecision(8);
	cout << ans << '\n';
	return 0;	
}