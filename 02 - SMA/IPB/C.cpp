#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,t,k,i,j,maks;
int A[10005];
vector<int> ans;

int main(){
	_
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ans.clear();
		for (i = 1 ; i <= n ; i++) 
			cin >> A[i];
		for (i = 1 ; i<= n-k+1 ; i++) {
			maks = A[i];
			for (j = 1 ; j<= k-1 ; j++) {
				if (A[i+j]>maks) maks = A[i+j];
			}
			ans.push_back(maks);
		}
		for (i = 0 ; i < ans.size() ; i++) {
			cout << ans[i];
			if (i!=ans.size()-1) cout << " ";
			else cout << endl;
		}
	}
	return 0;
}