#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
vector<int> A,B;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		A.clear(); B.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			A.push_back(j);
		}
		for (i = 0; i < m ; i++) {
			cin >> j;
			B.push_back(j);
		}
		sort(A.begin(),A.end()); sort(B.begin(),B.end());
		i = 0; j = 0;
		while (i < A.size() && j < B.size() ){
			if (A[i] >= B[j]) {
				j++;
			}
			else if (A[i] < B[j]) {
				i++;
			}
		}
		if (i==A.size()) cout << "MechaGodzilla\n";
		else if (j==B.size()) cout << "Godzilla\n";
		else cout << "uncertain\n";
	}
	return 0;
}