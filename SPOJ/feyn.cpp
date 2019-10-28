#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n, n>0) {
		cout << (n*(n+1)*(2*n+1))/6 << '\n';
	}
	return 0;
}