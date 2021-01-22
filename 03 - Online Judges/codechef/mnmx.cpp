#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

long long  t,n,i,j,x;
long long ans;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		long long mini = 10000000;
		for (i = 1; i <= n ; i ++) {
			cin >> x;
			mini = min(x,mini);
		}
		ans = mini*(n-1) ;
		cout << ans << '\n';
	}
	return 0;
}