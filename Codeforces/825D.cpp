#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;

typedef long long ll;

string s, t;
ll need[27], have[27], punya;

bool cek(int x){
	ll ned[26];
	for (int i = 0 ; i < 26; i++) {
		ned[i] = need[i] * x;
	}
	for (int i = 0 ; i < 26; i++) {
		if (punya >= ned[i] - have[i]) {
			punya -= max(ned[i]-have[i], (ll)0);
		}
		else return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> t;
	if (sz(t) > sz(s)) {
		for (int i = 0 ; i < s.size(); i++) {
			cout << (s[i] == '?'  ? 'a' : s[i]);
		}cout << '\n';
	}	
	else {
		int tanya = 0;
		for (int i = 0 ; i < s.size(); i++) {
			if (s[i] == '?') tanya++;
			else have[s[i] - 'a']++;
		}
		for (int i = 0 ; i < t.size(); i++) 
			need[t[i]-'a']++;
		int lo = 0, hi = (int)1e6+5;
		int ans = 0;
		while (lo <= hi) {
			int mid = (lo + hi)>>1;
			punya = tanya;
			if (cek(mid)) {
				ans = mid;
				lo = mid + 1;
			}
			else hi = mid - 1;
		}
		vector<pair<int,int> > arr;
		for (int i = 0 ; i < 26; i++) {
			need[i] *= ans;
		}
		for (int i = 0 ; i < 26 ; i++) {
			if (need[i] > have[i]) {
				arr.pb({i, need[i] - have[i]});
			} 
		}
		int j = 0;
		int curr = 0;
		for (int i = 0 ; i < s.size(); i++) {
			if (s[i] != '?') cout << s[i];
			else {
				if (j == sz(arr)) cout << 'a';
				else {
					cout << char(arr[j].fi + 'a');
					curr++;
					if (curr == arr[j].se) {
						curr = 0;
						j++;
					}
				}
			}
		}cout << '\n';
	}
	return 0;
}