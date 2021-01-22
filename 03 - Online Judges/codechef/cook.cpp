#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m,i,j;
int ans;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ans = 0;
		while ((n&(n-1))!=0) {
			ans++;
			if (n%2==0) n/=2;
			else n = (n-1)/2;
		}
		if (n<m) {
			while (n<m) {
				ans++;
				n *= 2;
			}
		}
		else if (n>m){
			while (n>m) {
				ans++;
				n /= 2;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}