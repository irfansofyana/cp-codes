#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[105],B[105];
vector<int> ans;

int main() {
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	cin >> m;
	for (i = 0 ; i < m ; i++) cin >> B[i];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			if (A[i]==B[j]) {
				ans.push_back(A[i]);
				break;
			}
		}
	}
	sort(ans.begin(),ans.end());
	for (i = 0 ; i < ans.size() ; i++) {
		if (i!=ans.size()-1) cout << ans[i] << " ";
		else cout << ans[i] << endl;
	}
	return 0;
}