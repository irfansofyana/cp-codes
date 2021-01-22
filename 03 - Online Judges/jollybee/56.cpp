#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,i,j;
string s,acuan;
vector<int> prima;

void gene(){
	for (i = 2 ; i <= 1000; i++) {
		for (j = 2 ; j<=(int)sqrt(i); j++) {
			if (i%j==0) {
				break;
			}
		}
		if (j==(int)sqrt(i)+1) prima.push_back(i);
	}
}

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	OPTIMASI
	gene();
 	cin >> t;
	while (t--) {
		cin >> s;
		int ans = -1;
		for (i = 0 ; i < prima.size(); i++) {
			acuan = ubah(prima[i]);
			int idx = 0;
			for (j = 0 ; j < s.size(); j++) {
				if (s[j]==acuan[idx]) idx++;
			}
			if (idx==acuan.size()) ans = max(ans,prima[i]);
		}
		cout << ans << endl;
	}
	return 0;
}