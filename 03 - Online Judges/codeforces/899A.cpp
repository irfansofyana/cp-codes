#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, satu, dua;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		(x == 1 ? satu++ : dua++);
	}
	int mini = min(satu, dua);
	int ans = mini;
	satu -= mini; dua -= mini;
	ans += satu/3;
	cout << ans << '\n';
	return 0;
}