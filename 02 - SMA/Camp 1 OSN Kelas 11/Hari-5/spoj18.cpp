#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[105],B[105];
int x;
vector<int> ans;
bool udah;

int main(){
	cin.tie(0);
	cin >> n >> x;
	for (i = 1 ; i <= n ; i++) cin >> A[i];
	for (i = 1 ; i <= n ; i++) cin >> B[i];
	for (i = 1 ; i <= n ; i++) {
		udah = false;
		for (j = -1*x ; j <= x && !udah; j++) {
			if (i+j>=1) {
				if (A[i]==B[i+j]) {
					ans.push_back(i);
					udah = true;
				}
			}
		}
	}
	for (i = 0 ; i < ans.size() ; i++) {
		cout << ans[i] ;
		if (i!=ans.size()-1) cout << " ";
		else cout << endl;
	}
	return 0;
}