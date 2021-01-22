#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;
string s;
int u, l, r, d;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for (int i = 0 ; i < n ; i++) {
		if (s[i] == 'L') l++;
		else if (s[i] == 'U') u++;
		else if (s[i] == 'D') d++;
		else r++;
	}
	cout << 2*min(l,r) + 2*min(u,d) << '\n';
	return 0;
}