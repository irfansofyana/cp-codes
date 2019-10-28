#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,k,i,j;
ll A[100005];
ll ans;

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n,comp);
	ans = 0;
	for (i = 0 ; i < n ; i++) {
		ll temp = 100-A[i];
		while (temp>0 && temp>k) {
			temp -= 10;
		}
		if (temp<0 || k<0) ans += (A[i]/10);
		else {
			ans += (A[i]+temp)/10;
			k -= temp;
		}
	}
	cout << ans << '\n';
	return 0;
}