#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){
	cin.tie(0);
	while (cin >> n >> m){
		int ans = 0;
		while (n>=m) {
			ans += m;
			n -= m; n++;
		}
		ans += n;
		cout << ans << endl;
	}
	return 0;
}