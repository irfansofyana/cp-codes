#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t,n,i,j;
string neww,oldd,tmp1,tmp2;
map<string,string> lama,baru;
vector<string> vlama,vbaru;
vector<pair<char,string> > ans1,ans2,ans3;

bool comp(pair<char,string> a,pair<char,string> b){
	return a.se < b.se;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> oldd >> neww;
		lama.clear(); baru.clear();
		vlama.clear(); vbaru.clear();
		i = 0;
		while (i < oldd.size()){
			if (oldd[i] == '{') i++;
			else if (oldd[i] >= 'a' && oldd[i] <= 'z') {
				tmp1 = ""; tmp1 = tmp1 + oldd[i];
				j = i+1;
				while (j < oldd.size() && oldd[j] >= 'a' && oldd[j] <= 'z') {
					tmp1 = tmp1 + oldd[j];
					j++;
				}
				i = j;
			}
			else if (oldd[i] == ':') {
				i++;
				tmp2 = ""; tmp2 = tmp2 + oldd[i];
				j = i+1;
				while (j < oldd.size() && oldd[j] >= '0' && oldd[j] <= '9') {
					tmp2 = tmp2 + oldd[j];
					j++;
				}
				lama[tmp1] = tmp2;
				vlama.pb(tmp1);
				i = j;
			}
			else i++;
		}
		i = 0;
		while (i < neww.size()){
			if (neww[i] == '{') i++;
			else if (neww[i] >= 'a' && neww[i] <= 'z') {
				tmp1 = ""; tmp1 = tmp1 + neww[i];
				j = i+1;
				while (j < neww.size() && neww[j] >= 'a' && neww[j] <= 'z') {
					tmp1 = tmp1 + neww[j];
					j++;
				}
				i = j;
			}
			else if (neww[i] == ':') {
				i++;
				tmp2 = ""; tmp2 = tmp2 + neww[i];
				j = i+1;
				while (j < neww.size() && neww[j] >= '0' && neww[j] <= '9') {
					tmp2 = tmp2 + neww[j];
					j++;
				}
				baru[tmp1] = tmp2;
				vbaru.pb(tmp1);
				i = j;
			}
			else i++;
		}
		ans1.clear(); ans2.clear(); ans3.clear();
		for (i = 0 ; i < vbaru.size(); i++){
			if (lama[vbaru[i]] == "") ans1.pb({'+',vbaru[i]});
		}
		sort(ans1.begin(),ans1.end(),comp);
		for (i = 0 ; i < vlama.size(); i++){
			if (baru[vlama[i]] == "") ans2.pb({'-',vlama[i]});
		}
		sort(ans2.begin(),ans2.end(),comp);
		for (i = 0; i < vlama.size(); i++){
			if (baru[vlama[i]] != "" && baru[vlama[i]] != lama[vlama[i]]) ans3.pb({'*',vlama[i]});
		}
		sort(ans3.begin(),ans3.end(),comp);
		if ((int)ans1.size() + (int)ans2.size() + (int)ans3.size() == 0){
			cout << "No changes\n";
		}
		else {
		//	cout << ans1.size() << " " << ans2.size() << " " << ans3.size() << '\n';
			for (i = 0 ; i < ans1.size(); i++){
				if (i == 0) {
					cout << '+' << ans1[i].se;
				}
				else {
					cout << ',' << ans1[i].se;
				}
				if (i == (int)ans1.size()-1) cout << '\n';
			}
			
			for (i = 0 ; i < ans2.size(); i++){
				if (i == 0) {
					cout << '-' << ans2[i].se;
				}
				else {
					cout << ',' << ans2[i].se;
				}
				if (i == (int)ans2.size()-1) cout << '\n';
			}
			
			for (i = 0 ; i < ans3.size(); i++){
				if (i == 0) {
					cout << '*' << ans3[i].se;
				}
				else {
					cout << ',' << ans3[i].se;
				}
				if (i == (int)ans3.size()-1) cout << '\n';
			}
		}
		cout << '\n';
	}	
	return 0;
}