#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
map<string,int> mep;
string s[10005];

bool comp(string a,string b){
	return a.size()>b.size();
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		mep.clear();
		for (i = 0 ; i < n ; i++){
			cin >> s[i];
			mep[s[i]]++;
		}
		sort(s,s+n,comp);
		int ans = 0;
		for (i = 0 ; i < n ; i++) {
			string temp = s[i];
			temp = temp.erase(temp.size()-1,1);
			if (mep[temp]==1 && mep[s[i]]==1) {
				ans++;
				mep[s[i]] = 0;
				mep[temp] = 0;
 			}
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}