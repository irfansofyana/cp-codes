#include <bits/stdc++.h>
using namespace std;

int t;
string s;
vector< int > v[26];
bool odd;
bool no;
int k;

int sizes[26];
stack< int > st;

int main(){
	cin >> t;
	for (int i = 1; i <= t; ++i){
		for (int i = 0; i < 26; ++i) v[i].clear();
		
		cin >> s;
		int siz = s.length();
		for (int i = 0; i < siz; ++i) v[s[i]-'a'].push_back(i+1);
		
		for (int i = 0; i < 26; ++i) sizes[i] = v[i].size();
		
		odd = false; no = false;
		for (int i = 0; i < 26; ++i)
			if (sizes[i]&1) {
				if (odd) {
					no = true; break;
				}
				else {
					odd = true; k = v[i].back(); v[i].pop_back();
					sizes[i]--;
				}
			}
		
		if (no) {
			cout << -1 << "\n";
			continue;
		}
		
		int cOutput = 0;
		
		for (int i = 0; i < 26; ++i){
			for (int j = 0; j < sizes[i]/2; ++j) {
				cout << v[i][j];
				++cOutput;
				if (cOutput < siz) cout << " ";
			}
			
			for (int j = sizes[i]/2; j < sizes[i]; ++j) {
				st.push(v[i][j]);
			}
		}
		
		if (odd) {
			cout << k;
			if (siz > 1) cout << " ";
		}
		
		while(!st.empty()) {
			cout << st.top();
			st.pop();
			if (!st.empty()) cout << " ";
		}
		cout << "\n";
	}
	
	return 0;
}