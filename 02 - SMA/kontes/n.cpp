#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll maks,mini;
ll n,x,i,j;
ll tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			if (i==0) {
				mini = x;
				maks = x;
			}
			else {
				mini = min(mini,x);
				maks = max(maks,x);
			}
		}
		cout << "Case " << ++tc << ": " << mini << " " << maks << " " << maks-mini << '\n';
	}
	return 0;
}