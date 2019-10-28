#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
map<int,bool> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m){
		if (n == 0 && m == 0) return 0;
		mep.clear();
		int ans = 0;
		for (i = 0 ; i < n ; i++){
			cin >> j;
			mep[j] = true;
		}
		for (i = 0 ; i < m ; i++) {
			cin >> j;
			if (mep[j]) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}