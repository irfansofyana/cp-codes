#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

string s;
int n,i,j;
map<string,ll> mep;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		mep.clear();
		for (i = 0 ; i < s.size(); i++) {
			if (s[i] == 'K') {
				mep["K"]++;
				mep["KEK"] += mep["KE"];
			}
			else if (s[i] == 'E') {
				mep["KE"] += mep["K"];
			}
		}
		cout << mep["KEK"] << '\n';
	}
	return 0;
}
