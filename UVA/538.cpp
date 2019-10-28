#include <bits/stdc++.h>
using namespace std;

int tc;
int n,t,i,j,money;
map<string,int> uang;
string s,ss;
vector<string> nama;
vector<pair<string,int> > pos,neg;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> t) {
		if (n == 0 && t == 0) return 0;
		nama.clear();
		uang.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> s;
			nama.push_back(s);
		}
		while (t--) {
			cin >> s >> ss >> money;
			uang[s] -= money;
			uang[ss] += money;
		}
		pos.clear(); neg.clear();
		for (i = 0 ; i < n; i++) {
			if (uang[nama[i]] >= 0) pos.push_back({nama[i],uang[nama[i]]});
			else neg.push_back({nama[i],-1*uang[nama[i]]});
		}
		cout << "Case #" << ++tc << '\n';
		i = 0; j = 0;
		while (i < pos.size() && j < neg.size()){
			int x = pos[i].second;
			int y = neg[j].second;
			if (x >= y) {
				cout << pos[i].first << " " << neg[j].first << " " << y << '\n';
				pos[i].second -= y;
				neg[j].second -= y;
				j++;
				if (x == y) i++;
			}
			else {
				cout << pos[i].first << " " << neg[j].first << " " << x << '\n';
				pos[i].second -= x;
				neg[j].second -= x;
				i++;
			}
		}
		cout << '\n';
	}
	return 0;
}