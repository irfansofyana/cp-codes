#include<bits/stdc++.h>
using namespace std;

int t,n,i,j,k,ans;
string s,tmp;
map<string,int> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k >> s;
		i = k-1;
		ans = 0;
		while (i < n) {
			if (i == k-1) {
				tmp = s.substr(0,k);
			}
			else {
				tmp.erase(0,1);
				tmp = tmp + s[i];
			}
			mep[tmp]++;
			if (mep[tmp] == 1) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
