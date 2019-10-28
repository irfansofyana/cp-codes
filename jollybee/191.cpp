#include <bits/stdc++.h>
#define  OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int A[1005];
vector<int> ans;

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 1 ; i <= n ; i++) {
		for (j = 1 ; j <= m ; j++) {
			int x;
			cin >> x;
			A[x]++;
		}
		int mini,idx;
		mini = 1e9;
		for (j = 1 ; j <= 1000; j++) {
			if (A[j]>=1) {
				if (A[j]<mini) {
					mini = A[j];
					idx = j;
				}
			} 
		}
		ans.push_back(idx);
	}
	for (i = 0 ; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
	return 0;
}