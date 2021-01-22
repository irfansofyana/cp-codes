#include <bits/stdc++.h>
using namespace std;

double x;
int n;

int main(){
	cin >> x;
	n = (int)x;
	vector<int> ans;
	if (double(n) <= x) ans.push_back(n);
	else ans.push_back(n-1);
	if (double(n) >= x) ans.push_back(n);
	else ans.push_back(n+1);
	for (int i = 0 ;i < ans.size(); i++){
		cout << ans[i];
		cout << (i==(int)ans.size()-1?'\n':' ');
	}
	return 0;
}