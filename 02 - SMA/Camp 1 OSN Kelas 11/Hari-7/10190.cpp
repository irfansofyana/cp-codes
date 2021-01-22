#include <bits/stdc++.h>
using namespace std;

long long n,m,i,j;
vector<long long> ans;

int main(){
	cin.tie(0);
	while (cin >> n >> m) {
		ans.clear();
		if (m==0 || m==1 || n<m) puts("Boring!");
		else {while (n%m==0) {
			ans.push_back(n);
			n /= m;
		}
		ans.push_back(n);
		if (n!=1) puts("Boring!");
		else {
			for (i = 0 ; i < ans.size() ; i++) {
				cout << ans[i];
				if (i!=ans.size()-1) cout << " ";
				else cout << endl;
			}
		}
		}
	}
	return 0;
}