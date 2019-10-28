#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
double x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x;
	ll y = 1;
	for (i = 1; i <= 100; i++) {
		y *= 2;
		if (y>x) {
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}