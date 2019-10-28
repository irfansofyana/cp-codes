#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int m,ans;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0 ;
	while (t--) {
		cin >> n >> m;
		ans = -1;
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			if (j>ans && j<=m) ans = j;
		}
		cout << "Case #" << ++tc << ": " ;
		if (ans==-1) cout << "HAPPY BIRTHDAY ANTONIO" << '\n';
		else cout << ans << '\n';
	}
	return 0;
}