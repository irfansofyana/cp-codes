#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int T, TC;
ll a, b, c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--){
		cin >> a >> b >> c;
		b*=(b+1); b/=2;
		c*=(c+1); c/=2;
		ll ans = a*b*c;
		cout << "Case " << ++TC << ": " <<  ans << '\n';
	}
	return 0;
}