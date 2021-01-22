#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,tmp;
int t,tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		tmp = (ll)sqrt(n);
		cout << "Case " << ++tc << ": ";
		if (n%2 == 0) {
			if (tmp%2 == 0) {
				cout << abs((tmp*tmp - n)/2) << '\n';
			}
			else {
				//tmp--;
				cout << min(abs(((tmp-1)*(tmp-1) - n)/2),abs(((tmp+1)*(tmp+1) - n)/2)) << '\n';
			}
		}
		else {
			if (tmp%2 == 1) {	
				cout << abs((tmp*tmp - n)/2) << '\n';
			}
			else {
				//tmp--;	
				cout << min(abs(((tmp-1)*(tmp-1) - n)/2),abs(((tmp+1)*(tmp+1) - n)/2))  << '\n';
			}
		}
		//cout << '\n';
	}
	return 0;
}
