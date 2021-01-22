#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, k;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	ll bagi = n/k;
	if (bagi%2 == 0) cout << "NO";
	else cout << "YES";
	cout << '\n';
	return 0;
}