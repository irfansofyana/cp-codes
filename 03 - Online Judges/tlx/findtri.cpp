#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t;
long long n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--){
		cin >> n;
		if (n%2 == 0 || n == 1) {
			cout << -1 << '\n';
		}
		else {
			long long smt = n;
			n *= n;
			long long tmp = (n-1)/2;
			cout << n/smt << " " << tmp << " " << tmp+1 << '\n';
		}
	}
	return 0;
}