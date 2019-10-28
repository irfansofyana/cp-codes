#include <bits/stdc++.h>
using namespace std;

string a,b;
int i,j;
vector<int> ans;

int main(){
	cin >> a >> b;
	for (i = 0 ; i < (min((int)a.size(),(int)b.size())); i++) {
		if (a[i]!=b[i]) ans.push_back(i+1);
	}
	if (a.size()>b.size()) {
		for (i = 0 ; i < (int)a.size()-(int)b.size(); i++) {
			ans.push_back((int)b.size()+i+1);
		}
	}
	else {
		for (i = 0 ; i < (int)b.size()-(int)a.size(); i++) {
			ans.push_back((int)a.size()+i+1);
		}
	}
	cout << ans.size() << '\n';
	for (i = 0 ; i < ans.size(); i++) {
		cout << ans[i];
		cout << (i==ans.size()-1?'\n':' ');
	}
	return 0;
}