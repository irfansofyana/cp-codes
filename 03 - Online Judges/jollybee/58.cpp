#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
string s;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s;
		for (i = 0 ; i < s.size(); i++) {
			if (i%2==0 && s[i]>='a' && s[i]<='z') s[i] = char((int)s[i]-32); 
		}
		cout << s << '\n';
	}
	return 0;
}