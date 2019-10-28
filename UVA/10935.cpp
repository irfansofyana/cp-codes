#include <bits/stdc++.h>
using namespace std;

int n,i,j;
vector<int> ans;
queue<int> antri;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		for (i = 1 ; i <= n ; i++) 
			antri.push(i);
		ans.clear();
		while (!antri.empty()){
			int x = antri.front();
			ans.push_back(x);
			antri.pop();
			if (!antri.empty()){
				int y = antri.front();
				antri.pop();
				antri.push(y);
			}
		}
		cout << "Discarded cards:";
		if (n == 1) cout << '\n';
		else {
			for (i = 0 ; i < (int)ans.size()-1; i++){
				cout << " " << ans[i];
				if (i != (int)ans.size()-2) cout << ',';
				else cout << '\n';
			}
		}
		cout << "Remaining card: " << ans[(int)ans.size()-1] << '\n';
	}
	return 0;
}