#include <bits/stdc++.h>
using namespace std;

int t,n;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> t; int j=0;
	while (t--) {
		cin >> n >> s;
		n--;
		s.erase(n,1);
		cout << ++j << " " << 	s << '\n';
	}
	return 0;
}