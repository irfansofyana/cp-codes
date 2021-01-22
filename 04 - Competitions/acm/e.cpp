#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, m;
string s, arr[1005];
bool udah[30];

bool valid(string x){
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] != '*' && s[i] != x[i]) return false;
		if (s[i] == '*' && udah[x[i]-'a']) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	cin >> m;
	for (int i = 0 ; i < m ; i++) {
		cin >> arr[i];
	}
	memset(udah, false, sizeof udah);
	for (int i = 0 ; i < s.size(); i++) 
		if (s[i] != '*') udah[s[i]-'a'] = true;
	int ans = 0;
	for (int i = 0 ; i < 26; i++) {
		if (!udah[i]) {
			bool bisa = true;
			for (int j = 0 ; j < m && bisa; j++) {
				if (valid(arr[j])) {
					bool dd = false;
					for (int k = 0 ; k < arr[j].size() && !dd; k++) {
						if (arr[j][k] == char(i + 'a')) dd = true;
					}
					if (!dd) bisa = false;
				}
			}
			if (bisa) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}