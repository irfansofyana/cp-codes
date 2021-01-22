#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long ll;

int n,i,j;
int x;
ll ans;

int main(){
	OPTIMASI
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (i = 1 ; i <= (int)sqrt(n); i++) {
			if (n%i==0) {
				j = n/i;
				if (i!=j) {
					if (i<n) ans += i;
					if (j<n) ans += j;
				}
				else {
					if (i<n) ans += i;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}