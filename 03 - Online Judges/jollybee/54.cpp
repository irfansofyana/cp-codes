#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		n = n*n;
		cout << ((n*(n+1))/2)/(int(sqrt(n))) << '\n';
	}
	return 0;
}