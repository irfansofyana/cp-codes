#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll x,n,i;
ll y;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	ll mini = 3000000000;
	for (i = 0 ; i < n ; i++) {
		cin >> y;
		x += y;
		if (y%2==1) mini = min(y,mini);
	}
	(x%2==0)? cout << x << '\n' : cout << x-mini << '\n';
	return 0;
}