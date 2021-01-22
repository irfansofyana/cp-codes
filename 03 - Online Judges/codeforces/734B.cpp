#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int k2, k3, k5, k6;
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> k2 >> k3 >> k5 >> k6;
	int x = min(min(k2, k5), k6);
	ans += x*256;
	k2 -= x; k5 -= x; k6 -= x;
	ans += 32*(min(k2, k3));
	cout << ans << '\n';
	return 0;
}