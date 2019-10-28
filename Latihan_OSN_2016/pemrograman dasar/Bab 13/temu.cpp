#include <bits/stdc++.h>
using namespace std;

int n,i;
vector<string> ans;

bool comp(string a,string b){
	if ((int)a.size()==(int)b.size()) {
		return a < b;
	}
	return (int)a.size() < (int)b.size();
}

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		string s;
		cin >> s;
		ans.push_back(s);
	}
	sort(ans.begin(),ans.end(),comp);
	for (i = 0 ;i < ans.size(); i++){cout << ans[i] << '\n';}
	return 0;
}