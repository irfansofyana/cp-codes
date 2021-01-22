#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int x,y;
vector<int> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> x >> y;
		ans.clear();
		for (i = 2 ; i<n; i++) {
			if (i%x==0 && i%y!=0) ans.push_back(i);
		}
		for (i = 0 ; i < ans.size(); i++) {
			cout << ans[i];
			cout << (i==(int)ans.size()-1?'\n':' ');
		}
	}
	return 0;
}