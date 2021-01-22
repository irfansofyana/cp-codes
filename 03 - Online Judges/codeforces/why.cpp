#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
int t;
ll ans[] = {1,4,6,5,2,0};


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		cout << ans[(n%6 == 0 ? 5 : (n%6)-1)] << '\n';
	}
	return 0;
}