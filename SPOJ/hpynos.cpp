#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
map<string,bool> mep;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	int ans = 0;
	while (s!="1" && !mep[s]) {
		ans ++;
		int temp = 0;
		mep[s] = true;
		for (i = 0 ; i < (int)s.size(); i++ ) {
			temp += ((int)s[i]-'0')*((int)s[i]-'0');
		}
		s = ubah(temp);
	}
	if (s=="1") cout << ans << '\n';
	else cout << -1 << '\n';
	return 0;
}