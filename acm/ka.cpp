#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;
int s[1005], d[1005];
int now;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> s[i] >> d[i];
	}
	now = s[0];
	for (int i = 1; i < n ; i++) {
		if (s[i] > now) {
			now = s[i];
		}
		else {
			int t = s[i];
			while (t <= now) t+=d[i];
			now = t;
		}
	}
	cout << now << '\n';
	return 0;
}