#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b >> c;
	if (c == 0){
		cout << (a==b ? "YES" : "NO") << '\n';
	}
	else {
		if ((b-a)%c!=0) cout << "NO\n";
		else {
			ll tmp = (b-a)/c;
			tmp++;
			cout << (tmp >= 1 ? "YES" : "NO") << '\n';
		}
	}
	return 0;
}