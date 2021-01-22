#include <bits/stdc++.h>
using namespace std;

int A[110],B[110];
int n,m;
int i,j;
vector<int> ans;

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	cin >> m;
	for (i = 0 ; i < m ; i++) cin >> B[i];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			if (A[i]==B[j]) break; 
		}
		if (j==m) ans.push_back(A[i]);
	}
	for (i = 0; i < ans.size(); i++) {
		if (i!=ans.size()-1) cout << ans[i] << " " ;
		else cout << ans[i] << endl;
	}
	return 0;
}