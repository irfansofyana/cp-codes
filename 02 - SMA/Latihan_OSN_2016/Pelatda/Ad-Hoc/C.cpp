#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,m,i,j;
ll bil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		bil = 1000000000;
		for (i = 0 ; i < n ; i++) {
			cin >> m;
			bil = min(m,bil);
		}
		cout << bil*(n-1) << '\n';
	}
	return 0;
}