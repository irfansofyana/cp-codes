#include <bits/stdc++.h>
using namespace std;

int tc,n;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << n << " is " ;
		n = abs(n);
		if (n%2==0) cout << "even" << '\n';
		else cout << "odd" << '\n';
	}
	return 0;
}