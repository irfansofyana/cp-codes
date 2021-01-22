#include <bits/stdc++.h>
using namespace std;

int k,tot,i,j;
int x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> k;
	x = 1;
	while (x<k) x*=2;
	tot = 0;
	if (x==k) cout << x << " " << 0 << '\n';
	else {
		int ans = 0;
		i = x;
		while (k>0) {
			while (x>k) {x/=2;ans++;} 
			k-=x;
		}
		cout << i << " " << ans << '\n';
	}
	return 0;
}