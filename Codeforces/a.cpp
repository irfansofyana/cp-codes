#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ans = 0;
	//ll t = ((ll)1e9) - 6;
	//cout << t*t << '\n';
	cin  >> s;
	for (int i = 0 ; i < s.size(); i++) {
		for (int j = i+1; j < s.size(); j++) {
			for (int k = j+1; k < s.size(); k++) {
				if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
					ans++;
				} 
			}
		}
	}
	cout << ans << '\n';
	return 0;
}