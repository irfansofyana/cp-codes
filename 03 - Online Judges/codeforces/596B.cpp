#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,ans,i,j;
ll x,sblm;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		if (i==0) {
			ans += abs(x);
			sblm = x;
		}
		else {
			ans += abs(x-sblm);
			sblm = x;
		}
	}
	cout << ans << '\n';
	return 0;
}