#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;


int n,i,j;
string s,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	cin >> n >> s;
	ans = "";
	i = 0;
	while (i < s.size()) {
		if (s[i] != 'o') {
			ans = ans + s[i];
			i++;
		}
		else if (s[i] == 'o') {
			string tmp = "";
			tmp = tmp + 'o';
			if (i + 1 < (int)s.size()) tmp = tmp + s[i+1];
			if (i + 2 < (int)s.size()) tmp = tmp + s[i+2];
			if (tmp == "ogo") {
				j = i + 3; bool ganti = false;
				while (j < s.size()) {
					if (!ganti && s[j] == 'g') {
						ganti = !ganti;
						j++;
					}
					if (ganti && s[j] == 'o') {
						ganti = !ganti;
						j++;
					}
					else break;
				}
				ans = ans + "***";
				if (!ganti) i = j;
				else i = j-1;
			}
			else {
				ans = ans + s[i];
				i++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}