#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
int t,tc;
ll n,m,i,j;
ll A[20005];

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n,comp);
		ll ans = 0;
		for (i = 2 ; i < n ; i+=3) {
			ans += A[i];
		}
		cout << ans << '\n';
	}
	return 0;
}