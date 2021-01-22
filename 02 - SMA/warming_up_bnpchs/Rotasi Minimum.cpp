#include <bits/stdc++.h>
using namespace std;


int n,i,j,t,ans;
string s,tmp;
int tc;

int ubah(string s){
	int res = 0;
	for (int z = 0 ; z < s.size() ; z++) {
		res = 10 * res + (int)s[z] - '0';
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		cout << "Kasus #" << ++tc << ": " ;
		for (i = 0 ; i < s.size(); i++) {
			if (s[i] >= '1' && s[i] <= '9') {
				tmp = s.substr(i,(int)s.size()-i);
				if (i > 0) {
					tmp = tmp + s.substr(0,i);
				}
				if (i == 0) ans = ubah(tmp);
				else if (ubah(tmp) < ans) ans = ubah(tmp);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
