#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, m;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	cin >> s;
	while (m--) {
		int  l,r;
		char c1,c2;
		cin >> l >> r >> c1 >> c2;
		l--; r--;
		for (int i = l ; i <= r; i++) {
			if (s[i] == c1) s[i] = c2;
		}
	}
	cout << s << '\n';
	return 0;	
}