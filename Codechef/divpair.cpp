#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m;
int t;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n%m==0) {
			if (m%2==1) cout << ((m+1)/2)*(n/m) << '\n';
			else cout << ((n/2)+1)*(n/m) << '\n';
		}
	}
	return 0;
}