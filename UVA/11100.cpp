#include <bits/stdc++.h>
using namespace std;


int n,m,i,j;
int A[10005];
int ukuran;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//bool pertama = false;
	while (cin >> n,n) {
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n);	
		vector<int> ans[10005];
		ukuran = 0;
		for (i = 0 ; i < n ; i++) {
			if (i==0) {
				ans[0].push_back(A[i]);
				ukuran++;
			}
			else {
				int mini = 10000000;
				int idx = 0;
				for (j = 0 ; j < ukuran ; j++) {
					int x = (int)ans[j].size()-1;
					if (A[i]>ans[j][x]) {
						if (x+1<mini) {
							mini = x+1;
							idx = j;
						}
					}
				}
				if (mini==10000000) {
					ans[ukuran].push_back(A[i]);
					ukuran++;
				}
				else {
					ans[idx].push_back(A[i]);
				}
			}
		}
		cout << ukuran << '\n';
		for (i = 0 ; i < ukuran; i++) {
			for (j = 0 ; j < ans[i].size(); j++){
				cout << ans[i][j];
				j==(int)ans[i].size()-1?cout << '\n' : cout << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}