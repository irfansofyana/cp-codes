#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll ans;
string s;
stack<int> st;
int pending, n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] == '(') {
			st.push(pending + 1);
			//if (i + 1 == (int)s.size())	ans += (1ll * pending * (pending + 1))>>1;
			pending = 0;
		}
		else {
			if (st.empty()) {
				ans += (1ll * pending * (pending + 1))>>1;
				pending = 0;
				continue;
			}
			ans += (1ll * pending * (pending + 1))>>1;
			pending = st.top(); st.pop();
		}
	}
	ans += (1ll * pending * (pending + 1))>>1;
	while (!st.empty()) {
		pending = st.top() - 1;
		ans += (1ll * pending * (pending + 1))>>1;
		st.pop();
	}
	cout << ans << '\n';
	return 0;
}