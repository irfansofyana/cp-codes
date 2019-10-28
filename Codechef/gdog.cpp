#include <bits/stdc++.h>
using namespace std;

int t,n,k;
int i,j,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int maks=0;
		for (i = 1;  i<=k ; i++) {
			if (n%i>maks) {
				maks = n%i;
			}
		}
		cout << maks << '\n';
	}
	return 0;
}