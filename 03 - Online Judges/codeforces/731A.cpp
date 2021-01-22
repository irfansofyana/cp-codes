#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

string s;
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int now = 0;
	for (int i = 0 ; i < s.size(); i++) {
		ans += min(abs(s[i]-'a'-now), 26-abs(s[i]-'a'-now));
		now = s[i] - 'a';
	}
	cout << ans << '\n';
	return 0;
}