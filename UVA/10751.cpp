#include <bits/stdc++.h>
using namespace std;

int t,n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		cout << fixed << showpoint << setprecision(3);
		if (n == 1) cout << 0.0 << '\n';
		else cout << 4.00*(n-1) + (double)(n-2)*(double)(n-2)*(sqrt(2)) << '\n';
		if (t > 0) cout << '\n';
		//cout << '\n';
	}
}