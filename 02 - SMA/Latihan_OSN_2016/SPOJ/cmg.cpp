#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,x;
char c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	int tc = 0;
	while (t--) {
		stack<int> antri,maks;
		cin >> n;
		int maxx = 0;
		cout << "Case " << ++tc << ":\n";
		while (n--) {
			cin >> c;
			if (c == 'A') {
				cin >> x;
				antri.push(x);
				maxx = max(maxx,x);
				maks.push(maxx);
			}
			else if (c == 'R') {
				if (!antri.empty()) antri.pop();
				if (!maks.empty()){
					maks.pop();
					if (!maks.empty()) maxx = maks.top();
					else maxx = 0;
				}
			}
			else if (c == 'Q') {
				if (!maks.empty()) {
					cout << maks.top() << '\n';
					//maks.pop();
				}
				else cout << "Empty" << '\n';
			}
		}
	}
	return 0;
}