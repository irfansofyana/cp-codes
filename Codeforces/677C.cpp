#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;

ll n,m,i,j;
ll ans;
string s;
ll cara[150];

void isi(){
	for (i = 0 ; i <= 63; i++) {
		for (j = 0 ; j <= 63; j++) {
			cara[(i&j)]++;
		}
	}
}

int ubah(char c){
	if (c >= '0' && c <= '9') return c-'0';
	if (c >= 'A' && c <= 'Z') return 10 + c-'A';
	if (c >= 'a' && c <= 'z') return 36 + c-'a';
	if (c == '-') return 62;
	if (c == '_') return 63;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> s;
	ans = 1;
	for (i = 0 ; i < s.size(); i++){
		ans *= cara[ubah(s[i])];
		ans %= MOD;
	}
	cout << ans << '\n';
	return 0;
}