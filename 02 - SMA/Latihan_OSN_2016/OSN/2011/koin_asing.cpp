#include <bits/stdc++.h>
using namespace std;

string s;
int i,j;
map<char,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (i = 0 ; i < s.size(); i++) mep[s[i]]++;
	for (i = 0 ; i < s.size(); i++){
		if (mep[s[i]]==1) {
			cout << i + 1 << '\n';
			return 0;
		}
	}
	return 0;
}