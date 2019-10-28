#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[105],B[105];
vector<int> ans;

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) 
		cin >> A[i];
	cin >> m;
	for (i = 0 ; i < m ; i++) 
		cin >> B[i];
	for (i = 0 ; i < n ; i++) {
		if (A[i]==B[i]) ans.push_back(i+1);
	}
	for (i = 0 ; i < ans.size() ; i++) {
		cout << ans[i] ;
		if (i!=ans.size()-1) cout << " ";
		else cout << endl;
	}
}