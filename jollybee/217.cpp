#include <bits/stdc++.h>
using namespace std;

string s;
int x,y,i;
double ans;

int main(){
	int t,tc=0;
	cin >> t;
	while (t--) {
	cin >> s;
	x = y = 0;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]=='#') x++;
		else y++;
	}
	ans = (double(x*100)/(x+y));
	bool jaw = false;
	if (ans>=40.0 && ans<90.0) jaw = true;
	cout << "Case #" << ++tc << ": " << (jaw?"NORMAL":"CRITICAL") << '\n';
	}
 	return 0;
}