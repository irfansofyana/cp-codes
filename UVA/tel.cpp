#include <bits/stdc++.h>
#define OPTIMASI
using namespace std;

int n,i,j,t;
vector<string> ans;
map<string,int> freq;
int f[26];
string s;

void generate(){
	for (i = 0; i < 15 ; i++) {
		f[i] = ((i-(i%3))/3) + 2;
	}
	f[15] = f[17] = f[18] = 7;
	f[19] = f[20] = f[21] = 8;
	f[22] = f[23] = f[24] = 9;
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	generate();
	cin >> t;
	while (t--) {
		ans.clear();
		freq.clear();
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> s;
			string tmp = "";
			for (j = 0 ; j < s.size(); j++){
				if (s[j] != '-') tmp = tmp+s[j];
			}
			string res = "";
			for (j = 0 ; j < tmp.size(); j++){
				if (tmp[j] >= 'A' && tmp[j] <= 'Y') res = res + char(f[(int)tmp[j]-'A'] + '0');
				else res = res + tmp[j];
				if (j == 2) res = res + '-';
			}
			//cout << res << '\n';
			ans.push_back(res);
			freq[res]++;
		}
		sort(ans.begin(),ans.end());
		bool can = false;
		i = 0; j = 0;
		while (i < ans.size()){
			if (freq[ans[i]] > 1) {
				cout << ans[i] << " " << freq[ans[i]] << '\n';
				can = true;
			}
			j = i+1;
			while (j < ans.size() && ans[j] == ans[j-1]) j++;
			i = j;
		}
		if (!can) cout << "No duplicates.\n";
		if (t > 0) cout << '\n';
	}
}