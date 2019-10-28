#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll A[1005],B[1005];
ll ans,x;
map<ll,ll> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	for (i = 0 ; i < n ; i++) cin >> B[i];
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		mep[x]++;
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0; j < n ; j++) {
			x = A[i]+B[j];
			ans += mep[-1*x];
		}
	}
	cout << ans << '\n';
	return 0;
}
