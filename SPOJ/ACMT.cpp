#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

long long a,b;
long long n,i,j,tmp;
long long ans;
long long t;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a == 0 || b ==0) {
			cout << 0 << '\n';	
		}
		else {
			ans = -1;
			for (i = 0 ; i <= a; i++) {
				j = a - i;
				tmp = (j / 2);
				if (2 * i + tmp <= b) {
					ans = max(ans, i + tmp);
				}
			}
			for (i = 0 ; i <= b; i++) {
				j = b - i;
				tmp = j/2;
				if (tmp + 2*i <= a) {
					ans = max(ans, i+tmp);
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
