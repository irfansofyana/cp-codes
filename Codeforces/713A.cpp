#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t,n,i,j;
string s;
map<string,int> mep;
char c;

string ubah(string s){
	int i,j;
	string res = "";
	for (i = (int)s.size()-1; i >= 0 ; i--) {
		j = s[i] - '0';
		if (j%2 == 0) res = '0' + res;
		else res = '1' + res;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> c >> s;
		if (c == '+' || c == '-' ) {
			s = ubah(s);
			if (c == '+') j = 1;
			else j = -1;
			for (i = 0 ; i < s.size() && s[i] == '0'; i++);
			s = s.substr(i,(int)s.size()-i);
			mep[s]+=j;
			int ukuran = (int)s.size();
			for (i = 0 ; i < 18 - ukuran; i++) {
				s = '0' + s;
				mep[s]+=j;
			}
		}
		else cout << mep[s] << '\n';
	}
	return 0;
}
