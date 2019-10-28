#include <bits/stdc++.h>
using namespace std;

int n,i,j;
vector<string> ans;
string s,temp;

int main(){
	cin.tie(0); 
	ios_base::sync_with_stdio(0);
	cin >> s >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> temp;
		if (temp.substr(0,s.size())==s){
			ans.push_back(temp);
		}
	}
	if (ans.size()==0) {
		cout << s << endl;
	}
	else {
		sort(ans.begin(),ans.end());
		cout << ans[0] << endl;
	}
	return 0;
}
