#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j,tc;
string s;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> j;
		cin >> s;
		int temp=0;
		int ans = 0;
		for (i = 0 ; i < s.size(); i++) {
			if (i%2==0) {
				if (s[i]=='R') temp++;
			}
			else if (i%2==1) {
				if (s[i]=='L') temp++;
			}
		}
		ans = temp; temp = 0;
		for (i = 0 ; i < s.size(); i++) {
			if (i%2==0) {
				if (s[i]=='L') temp++;
			}
			else if (i%2==1) {
				if (s[i]=='R') temp++;
			}
		}
		cout << "Kasus #" << ++tc << ": " << min(temp,ans) << '\n';
	}
	return 0;
}