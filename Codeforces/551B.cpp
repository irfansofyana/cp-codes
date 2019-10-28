#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;

string a, b, c;
int freq[27], mini, frek[27], tmp[27], frekk[27];
int ans1, ans2, maks;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b >> c;
	for (int i = 0 ; i < a.size(); i++) freq[a[i]-'a']++;
	for (int i = 0 ; i < b.size(); i++) {
		frek[b[i]-'a']++;
	}
	mini = (int)1e9;
	for (int i = 0 ; i < 26; i++) {
		if (frek[i] > 0) {
			mini = min(mini, freq[i]/frek[i]);
		}
	}
	for (int i = 0 ; i < c.size(); i++) frekk[c[i]-'a']++;
	maks = -1;
	for (int i = 0 ; i <= mini; i++) {
		for (int j = 0 ; j < 26; j++) tmp[j] = freq[j] - i*frek[j];
		int tt = (int)1e9;
		for (int j = 0 ; j < 26; j++) {
			if (frekk[j] > 0) {
				tt = min(tt, tmp[j]/ frekk[j]);
			}
		}
		if (i + tt > maks) {
			maks = i + tt;
			ans1 = i;
			ans2 = tt;
		}
	}
	for (int i = 0 ; i < 26; i++) {
		freq[i] -= (ans1*frek[i] + ans2*frekk[i]);
	}
	for (int i = 0 ; i < ans1; i++) cout << b;
	for (int i = 0 ; i < ans2; i++) cout << c;
	for (int i = 0 ; i < 26; i++) {
		for (int j = 0 ; j < freq[i]; j++) cout << char(i + 'a');
	}cout << '\n';
	return 0;
}