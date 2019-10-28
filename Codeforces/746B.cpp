#include <bits/stdc++.h>

using namespace std;

int n, le, ri;
string s;
char ans[2005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	if (n%2 == 1) {
		ans[n/2] = s[0];
		le = (n/2)-1; ri = (n/2) + 1;
		for (int i = 1; i < s.size(); i++) {
			if (i%2 == 1) {
				ans[le] = s[i];
				le--;
			}
			else {
				ans[ri] = s[i];
				ri++;
			}
		}
	}
	else {
		ans[(n/2)-1] = s[0];
		le = (n/2)-2; ri = (n/2);
		for (int i = 1; i < s.size(); i++) {
			if (i%2 == 1) {
				ans[ri] = s[i];
				ri++;
			}
			else {
				ans[le] = s[i];
				le--;
			}
		}
	}
	for (int i = 0 ; i < n ; i++) 
		cout << ans[i];
	cout << '\n';
	return 0;
}