#include <bits/stdc++.h>
using namespace std;

int n,q,i,j;
map<string,string> mep;
string s,ss;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> q;
	for (i = 0 ; i < n ; i++){
		cin >> s >> ss;
		mep[s] = ss;
	}
	while (q--) {
		cin >> s;
		cout << (mep[s]=="" ? "NIHIL":mep[s]) << '\n';
	}
	return 0;
}