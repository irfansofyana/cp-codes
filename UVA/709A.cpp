#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,i,j,x,b,d;
ll ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> b >> d;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		if (x > b) continue;
		else {
			j += x;
			if (j > d) {
				ans++;
				j = 0;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
