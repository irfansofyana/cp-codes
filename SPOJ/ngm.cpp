#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int ans;
	if (n%10==0) ans = 2;
	else ans = 1;
	cout << ans << '\n';
	if (ans==1) cout << n%10 << '\n';
	return 0;
}