#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;

string s,ss;
int frek[26];
int t,tc,n,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> s >> ss;
		memset(frek,0,sizeof frek);
		for (i = 0 ; i < s.size(); i++){
			frek[s[i]-'A']++;
		}
		bool ans = true;
		for (i = 0 ; i < ss.size(); i++) {
			if (frek[ss[i]-'A'] > 0) {
				frek[ss[i]-'A']--;
			}
			else {
				ans = false;
				break;
			}
		}
		cout << "Kasus #" << ++tc << ": " << (ans ? "YA" : "TIDAK") << '\n';
	}
	return 0;
}
