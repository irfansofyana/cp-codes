#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	if (n%2 == 0) {
		cout << n/2 << '\n';
	}
	else {
		cout << (n-1)/2 - n << '\n';
	}
	return 0;
}
