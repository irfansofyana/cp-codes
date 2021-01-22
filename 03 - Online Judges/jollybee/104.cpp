#include <bits/stdc++.h>
using namespace std;

int n,x,i;

int main(){
	cin >> n;
	int ans = -1;
	for (i = 1 ; i <= n ; i++) {
		cin >> x;
		ans = max(ans,x);
	}
	cout << ans << '\n';
	return 0;
}