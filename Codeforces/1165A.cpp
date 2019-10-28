#include <bits/stdc++.h>
using namespace std;

int n, x, y, ans;
string s;

int main(){
	cin >> n >> x >> y;
	cin >> s;
	for (int i = n-1; i >= n-y; i--){
		if (s[i] != '0') ans++;
	}
	if (s[n-y-1] != '1') ans++;
	for (int i = n-y-2; i >= n-x; i--){
		if (s[i] == '1') ans++;
	}
	cout << ans << '\n';
	return 0;
}