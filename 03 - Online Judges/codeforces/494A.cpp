#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;
int cnt, idx, ans[100005];
int lastidx, last;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (int i = 0 ; i < s.size(); i++) {
		if (cnt < 0) {
			cout << -1 << '\n';
			return 0;
		}
		if (s[i] == '(') cnt++;
		else if (s[i] == ')') {
			if (cnt == 0) {
				cout << -1 << '\n';
				return 0;
			}
			else cnt--;
		}
		else if (s[i] == '#') {
			if (cnt == 0) {
				cout << -1 << '\n';
				return 0;
			}
			ans[idx++] = 1;
			lastidx = i;
			last = cnt;
			cnt--;	
		}
	}
	int itung = 0;
	for (int i = lastidx+1; i < s.size(); i++) {
		if (itung > 0) {
			cout << -1 << '\n';
			return 0;
		}
		if (s[i] == '(') itung++;
		else if (s[i] == ')') itung--;
	}
	if (itung > 0) {
		cout << -1 << '\n';
		return 0;
	}
	else {
		for (int i = 0 ; i < idx; i++) {
			if (i == idx-1) {
				cout << last + itung << '\n';
			}
			else cout << ans[i] << '\n';
		}
	}
	return 0;
}