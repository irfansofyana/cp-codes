#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
vector<string> odd,even;
string s;
int tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n,n) {
		odd.clear(); even.clear();
		for (i = 0 ; i < n  ; i++) {
			cin >> s;
			(i%2==0) ? even.push_back(s) : odd.push_back(s);
		}
		reverse(odd.begin(),odd.end());
		cout << "SET " << ++tc << '\n'; 
		for (i = 0; i < even.size(); i++) cout << even[i] << '\n';
		for (i = 0 ; i < odd.size(); i++) cout << odd[i] << '\n';
	}
	return 0;
}