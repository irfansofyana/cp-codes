#include <bits/stdc++.h>
using namespace std;

long long t,x,s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t >> s >> x;
	if (t == x) cout << "YES\n";
	else if ((x-t)%s == 0 && ((x-t)/s > 0)) cout << "YES\n";
	else if ((x-t-1)%s == 0 && ((x-t-1)/s > 0)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
