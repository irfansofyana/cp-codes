#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,tc;
int i,j;
string s;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		int x=0,y=0;
		cin >> s;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i]=='U') y++;
			else if (s[i]=='T') x++;
			else if (s[i]=='S') y--;
			else x--;
		}
		cout << "Kasus #" << ++tc << ": " << abs(x)+abs(y) << '\n';
	}
	return 0;
}