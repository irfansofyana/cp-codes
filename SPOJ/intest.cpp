#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	//cout.tie(0);
	int ans=0;
	cin >> n >> k;
	while (n--) {
		ll x;
		cin >> x;
		ll temp = (x/k);
		if (temp*k==x) ans++;
	}
	cout << ans << '\n';
	return 0;
}