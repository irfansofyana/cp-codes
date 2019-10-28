#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s;
int i;
char c;

int main(){
	OPTIMASI
	cin >> s >> c;
	int ans = 0;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]==c) ans++;
	}
	cout << ans << '\n';
	return 0;
}