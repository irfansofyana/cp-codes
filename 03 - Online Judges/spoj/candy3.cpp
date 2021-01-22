#include <bits/stdc++.h>
using namespace std;

long long int n,i,j;
long long int sum,x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t;
	cin >> t;
	while (t--) {
		cin >> n;
		sum = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			sum += (x%n); sum = sum%n;
		}
		if (sum==0) cout << "YES";
		else cout << "NO";
		cout << '\n';
	}
	return 0;
}