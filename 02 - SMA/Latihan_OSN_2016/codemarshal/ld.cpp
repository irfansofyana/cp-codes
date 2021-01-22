#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,ans;
ll A[]={0,4,20,20,20,20,24,20,20,20};
ll bil,i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	bil = (m/4);
	ans = bil * A[n%10];
	ll temp = 1;
	for (i = 1 ; i <= (m%4) ; i++) {
		temp *= (n%10);
		temp %= 10;
		ans += temp;
	}
	ans++;
	cout << ans%10 << '\n';
	return 0;
}