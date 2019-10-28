#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int tc,x,y;
vector<int> ans;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n >> x >> y;
		ans.clear();
		for (i = 2 ; i<= n-1 ; i++) {
			if ((i%x==0) && (i%y!=0)) ans.push_back(i);
		}
		for (i = 0 ; i < ans.size() ; i++) {
			if (i!=ans.size()-1) cout << ans[i] << " ";
			else cout << ans[i] << endl;
		}
	}
	return 0;
}