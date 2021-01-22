#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int q, n;

int solve(int x){
	if (x <= 3) return -1;
	if ((x == 5) || (x==7) || (x==11)) return -1;
	if (x%2 == 0) return x/4;
	if (x%2 == 1) {
		if (x == 9) return 1;
		return (x/4)-1;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> q;
	while (q--) {
		cin >> n;
		cout << solve(n) << '\n';
	}
	return 0;
}