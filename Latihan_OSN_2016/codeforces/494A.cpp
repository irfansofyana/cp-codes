#include <bits/stdc++.h>
using namespace std;

string s;
int i,j;	
int tmp;
int ret;
vector<int> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	i = 0;
	while (i < s.size()){
		if (s[i] == ')') {ret--; i++;}
		else if (s[i] == '(') {ret++; i++;}
		if (ret < 0) {
			cout << -1 << '\n';
			return 0;
		}
		if (s[i] == '#') {
			j = i+1;
			tmp = ret;
			while (j < s.size() && (s[j]=='#' || s[j] == ')')) {
				if (s[j] == '#') s[j] = '.';
				tmp--;
				j++;
			}
			if (tmp <= 0) {
				cout << -1 << '\n';
				return 0;
			}
			else {
				ans.push_back(tmp);
				ret = 0;
			}
			i = j;
		}
	}
	j = 0;
	for (i = 0 ; i < s.size(); i++){
		if (s[i] == '#') {
			cout << ans[j] << '\n';
			j++;
		}
		else if (s[i] == '.') {
			cout << 1 << '\n';
		}
	}
	return 0;
}