#include <bits/stdc++.h>
using namespace std;

int q;
string s;
map<multiset<char>,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> q;
	while (q--){
		cin >> s;
		for (int i = 0; i < (int)s.size(); i++){
			multiset<char> ms;
			for (int j = i; j < (int)s.size(); j++){
				ms.insert(s[j]);
				mep[ms]++;
			}
		}
		long long ans = 0;
		for (auto a : mep){
			long long bil = ((a.second)*(a.second - 1))/2;
			ans += bil;
		}
		cout << ans << '\n';
		mep.clear();
	}
	return 0;
}