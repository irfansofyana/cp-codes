#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define OPTIMASI

using namespace std;

int n,i,j;
stack<string> antri;
string s;

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "pwd") {
			stack<string> tmp;
			while (!antri.empty()) {
				tmp.push(antri.top());
				antri.pop();
			}
			bool cek = true;
			while (!tmp.empty()){
				cout << '/';
				cout << tmp.top();
				antri.push(tmp.top());
				tmp.pop();
			}
			cout << "/\n";
		}
		else {
			cin >> s;
			if (s == "/") continue;
			i = 0; j = s.find('/');
			string smt;
			while (j >=0 && j < s.size()) {
				smt = s.substr(i,j-i);
				if (smt == "..") {
					if (!antri.empty()) antri.pop();
				}
				else if (smt.size() > 0)antri.push(smt);
				i = j+1;
				j = s.find('/', i);
			}
			smt = s.substr(i, (int)s.size()-i);
			if (smt == "..") {
				if (!antri.empty()) {
					//cout << antri.front() << '\n';
					antri.pop();
				}
			}
			else if (smt.size()>0)antri.push(smt);
		}
	}
	return 0;
}
