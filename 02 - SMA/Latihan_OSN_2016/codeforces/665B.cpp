#include <bits/stdc++.h>
using namespace std;

int n,m,k,i,j;
vector<int> A;
int pos[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (i = 0 ; i < k ; i++) {
		int x;
		cin >> x;
		A.push_back(x);
		pos[x] = i;
	}
	int ans = 0;
	while (n--) {
		for (i = 0 ; i < m ; i++) {
			int x;
			cin >> x;
			int bil = pos[x];
			ans += bil+1;
			A.erase(A.begin() + bil);
			vector<int> B;
			B = A; A.clear();
			A.push_back(x);
			for (j = 0 ; j < B.size(); j++) A.push_back(B[j]);
			for (j = 0 ; j < A.size(); j++){
				pos[A[j]] = j;
			}
			//for (j = 0 ; j < A.size(); j++) cout << A[j] << " "; cout << '\n';
		}
	}
	cout << ans << '\n';
	return 0;
}