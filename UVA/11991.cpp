#include <bits/stdc++.h>
using namespace std;

const int MAXX = (int)1e6;

int n,m,i,j;
vector<int> arr[MAXX + 5];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m) {
		for (i = 1 ; i <= n ; i++) {
			int x;
			cin >> x;
			arr[x].push_back(i);
		}
		while (m--) {
			cin >> i >> j;
			if (i > arr[j].size()) cout << '0' << '\n';
			else {
				i--;
				cout << arr[j][i] << '\n';
			}
		}
		for (i = 0 ; i <= MAXX ; i++) {
			arr[i].clear();
		}
	}
	return 0;
}