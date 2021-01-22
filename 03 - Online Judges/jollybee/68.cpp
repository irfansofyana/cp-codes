#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int t,tc;
vector<int> a;



int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		a.clear();
		for (i = 0 ; i < n; i++) {cin >> j; a.push_back(j);}
		sort(a.begin(),a.end());
		int ans = 0;
		for (i = 0 ; i < 5 ; i++) ans += a[a.size()-1-i];
		cout << ans << '\n';
	}
	return 0;
}