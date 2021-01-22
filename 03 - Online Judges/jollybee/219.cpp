#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
string s;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s;
		if (s[0]>='A' && s[0]<='Z') {
			j = 0; n = 1;
			for (i = 0 ; i < s.size(); i++) {
				j++;
				if (n%2==1) {
					if (s[i]>='a' && s[i]<='z') cout << char((int)s[i]-32);
					else cout << s[i];
				}
				else if (n%2==0) {
					if (s[i]>='A' && s[i]<='Z') cout << char((int)s[i]+32);
					else cout << s[i];
				}
				if (j==n) {
					j = 0;
					n++;
				}
			}
		}
		else {
			j = 0; n = 1;
			for (i = 0 ; i < s.size(); i++) {
				j++;
				if (n%2==1) {
					if (s[i]>='A' && s[i]<='Z') cout << char((int)s[i]+32);
					else cout << s[i];
				}
				else if (n%2==0) {
					if (s[i]>='a' && s[i]<='z') cout << char((int)s[i]-32);
					else cout << s[i];
				}
				if (j==n) {
					j = 0;
					n++;
				}
			}
		}
		cout << '\n';
	}
	return 0;
}