#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int tc,n,i,j,t;
int ans,mini,idx;
string s[10];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n ;
		ans = -1; mini = 10000;
		for (i = 0 ; i < n ; i++) {
			cin >> s[i]; 
			if ((int)s[i].size()<mini) {
				mini = (int)s[i].size();
				idx = i;
			}
		}
		for (i = 0 ; i < mini ; i++) {
			for (j = 1 ; j < n ; j++) {
				if (s[j][i]!=s[0][i]) {
					ans = i;
					break;
				}
			}
			if (ans!=-1) break;
		}
		if (ans!=-1) cout << "Case #" << ++tc << ": " << s[0].substr(0,ans) << '\n';
		else cout << "Case #" << ++tc << ": " << s[idx] << '\n';
	}
	return 0;
}