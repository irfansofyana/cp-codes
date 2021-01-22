#include <bits/stdc++.h>
using namespace std;

int t,n,m,i,j;
string main1[17],main2[17];
int gol1[17],gol2[17];
map<string,int> mep;
vector<string> tim;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		mep.clear(); tim.clear();
		for (i = 0 ; i < 16; i++) {
			cin >> main1[i] >> main2[i] >> gol1[i] >> gol2[i];
			mep[main1[i]]++; mep[main2[i]]++;
			if (mep[main1[i]]==1) tim.push_back(main1[i]);
			if (mep[main2[i]]==1) tim.push_back(main2[i]);
		}
		string ans ;
		for (i = 0 ; i < tim.size(); i++){
			string pnow = tim[i];
			for (j = 0 ; j < 16 ; j++) {
				if (pnow==main1[j]) {
					if (gol2[j]>gol1[j]) break;
				}
				else if (pnow==main2[j]) {
					if (gol1[j]>gol2[j]) break;
				}
			}
			if (j==16) {
				ans = pnow;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}