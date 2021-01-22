#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
bool bisa[10000];
vector<int> A[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(bisa,false,sizeof bisa);
	for (i = 0 ; i < n; i++) {
		int x;
		cin >> x;
		bisa[x] = true;
		cin >> m ;
		for (j = 0 ; j < m ; j++) {
			int y;
			cin >> y;
			A[i].push_back(y);
		}
	}
	int ans = 0;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < A[i].size(); j++){
			if (!bisa[A[i][j]]) {
				ans++;
				bisa[A[i][j]] = true;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}