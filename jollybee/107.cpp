#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
int t,tc;
vector<int> ubah;
char ans[100];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s;
		memset(ans,'a',sizeof ans);
		ubah.clear();
		for (i = 0 ; i < s.size(); i++) {
			if (s[i]=='0') ubah.push_back(i);
		}
		for (i = 0 ; i < ((int)ubah.size())-1; i++) {
			if (ubah[i+1]-ubah[i]==1) ans[ubah[i]] = '1';
			else {
				int simpan = 0;
				for (j = ubah[i+1]-1; j >= ubah[i]+1; j--) {
					ans[j] = char((11-simpan-((int)s[j]-'0'))%10+'0');
					if (s[j]!='1'	)simpan = 1;
				}
				if (simpan==1) ans[ubah[i]] = '0';
				else ans[ubah[i]] = '1';
			}
		}
		if (ubah.size()!=0) {
		//cout << "masuk" << endl;
			if (ubah[(int)ubah.size()-1]==(int)s.size()-1) ans[(int)s.size()-1] = '1';
			else {
				int simpan = 0;
				for (j = ((int)s.size()-1); j >= ubah[((int)ubah.size())-1]+1; j--) {
					ans[j] = char((11-simpan-((int)s[j]-'0'))%10+'0');
					if (s[j]!='1') simpan = 1;
				}
				if (simpan==1) ans[ubah[(int)ubah.size()-1]] = '0';
				else  ans[ubah[(int)ubah.size()-1]] = '1';
			}
		}
		bool ada = false;
		cout << "Kasus " << ++tc << ": ";
		for (i = 0 ; i < s.size(); i++) {
			if (ans[i]!='a') {
				if (ans[i]=='0' && !ada) {} 
				else if (ans[i]!='0') {
					cout << ans[i];
					ada = true;
				}
				else if (ans[i]=='0') 
					cout << ans[i];
			}
			//cout << ans[i] ;
		}
		if (!ada) cout << "0";
		cout << '\n';
	}
	return 0;
}