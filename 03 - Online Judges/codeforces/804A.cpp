#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	if (n%2 == 0) cout << (n/2) - 1 << '\n';
	else cout << n/2 << '\n';
	return 0;
}