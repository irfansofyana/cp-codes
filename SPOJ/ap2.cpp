#include <bits/stdc++.h>
using namespace std;

long long t,n,sum,a,b;
long long tig,ltig;
long i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> tig >> ltig >> sum;
		n = (2*sum)/(tig+ltig);
		b = (ltig-tig)/(n-5);	
		a = tig-2*b;
		cout << n << '\n';
		for (i = 1; i<=n; i++) {
			cout << a+(i-1)*b ;
			if (i==n) cout << '\n';
			else cout << ' ';
		}
	}
	return 0;
}