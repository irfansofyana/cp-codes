#include <bits/stdc++.h>
using namespace std;

int n,i,j,maks,sb;
string s,temp,ans;
map<string,int> mep;

int main(){
	cin.tie(0);
	while (cin >> n >> s) {
		mep.clear(); n--;
		sb = 0; maks = 0; 
		maks = -100000;
		for (i = n ; i < s.size() ; i++) {
			temp = s.substr(sb,i-sb+1);
			mep[temp]++;
			if (mep[temp]>maks) {
				maks = mep[temp];
				ans = temp;
			}
			sb++;
		}
		cout << ans << endl;
	}
	return 0;
}