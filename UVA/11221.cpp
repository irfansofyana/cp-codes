#include <bits/stdc++.h>
using namespace std;

int t,tc,n,m,i,j;
string s,st,tmp;
char arr[105][105];
string inp[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	getline(cin,s);
	while (t--) {
		getline(cin,s);
		st = "";
		for (i = 0 ; i < s.size(); i++){
			if (s[i] >= 'a' && s[i] <= 'z') 
				st = st + s[i];
		}
		n = (int)sqrt(st.size());
		cout << "Case #" << ++tc << ":\n";
		if (n*n != (int)st.size())
			cout << "No magic :(\n";
		else {
			m = 0;
			for (i = 0 ; i < n ; i++) {
				inp[i] = "";
				for (j = 0 ; j < n ; j++) {
					arr[i][j] = st[m];
					inp[i] = inp[i] + st[m];
					m++;
				}
			}
			bool can = true;
			for (i = 0 ; i < n ; i++) {
				tmp = "";
				for (j = 0 ; j < n ; j++) {
					tmp = tmp + arr[j][i];
				}
				if (tmp != inp[i]) {
					can = false; break;
				}
			}
			for (i = n-1 ; i >= 0 ; i--) {
				tmp = "";
				for (j = n-1 ; j >= 0 ; j--) {
					tmp = tmp + arr[i][j];
				}
				if (tmp != inp[n-1-i]) {
					can = false; break;
				}
			}
			for (i = n-1 ; i >= 0 ; i--) {
				tmp = "";
				for (j = n-1 ; j >= 0 ; j--) {
					tmp = tmp + arr[j][i];
				}
				if (tmp != inp[n-1-i]) {
					can = false; break;
				}
			}
			if (can) cout << n << '\n';
			else cout << "No magic :(\n";
		}
	}
	return 0;
}