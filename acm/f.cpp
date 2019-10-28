#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

map<string,int> mep;
int n;
string s;

string ganti(string s){
	string res = "";
	int i = 0;
	while (i < s.size()) {
		if (s[i] == 'u') {
			res = res + "oo";
			i++;
		}
		else if (s[i] == 'k') {
			int j = i+1;
			string tmp = "";
			tmp = tmp+'k';
			while (j < s.size() && s[j] == 'k') {
				tmp = tmp + 'k';
				j++;
			}
			if (j < s.size() && s[j] == 'h') {
				res = res+'h';
				i = j+1;
			} 
			else  {
				res = res+tmp;
				i = j;
			}
		}
		else {
			res = res+s[i];
			i++;
		}
	}
	return res;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int ans = 0;
	while (n--) {
		cin >> s;
		string t = ganti(s);
		mep[t]++;
		if (mep[t] == 1) ans++;
		//cout << 1 << " " << t << '\n';
	}
	cout << ans << '\n';
	return 0;
}