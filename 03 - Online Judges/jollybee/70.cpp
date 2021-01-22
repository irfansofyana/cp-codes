#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		int maks = 0;
		int ans = 0;
		for (i = 0 ; i < (1<<n) ; i++) {
			cin >> j; 
			if (j>maks) {maks = j; ans = i+1;}
		}
		cout << ans << '\n';
	}
	return 0;
}