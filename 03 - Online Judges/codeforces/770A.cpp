#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, k;
int ch, prev;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	string ans = "";
	for (int i = 0 ; i < k ; i++) {
		ans += char(i+'a');
	}
	int j = 0;
	for (int i = k; i < n ; i++) {
		ans += char(j+'a');
		j++;
		if (j == k) j = 0;
	}
	cout << ans << '\n';
	return 0;
}