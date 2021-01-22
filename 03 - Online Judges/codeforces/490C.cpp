#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;


string s;
ll a, b, tmp, tmp1;
ll tota, nowb, nowa;
ll ans;
bool bener[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> s >> a >> b;
	tmp = 1; tota = 0;
	for (int i = 0 ; i < s.size(); i++) {
		tota = 10*tota + s[i]-'0';
		tota %= a;
		if (tota == 0) bener[i] = true;
		else bener[i] = false;
	}
	tmp = 1; ans = -1;
	for (int i = (int)s.size()-1; i >= 1 ; i--) {
		nowb += (s[i]-'0')*tmp;
		tmp *= 10; 
		tmp%=b; nowb %= b; 
		if (nowb == 0){
			if (s[i] != '0') {
				if (bener[i-1]) {
					ans = i;
					break;
				}
			}
		}
	}
	if (ans!=-1) {
		cout << "YES\n";
		for (int i = 0 ; i < ans; i++) cout << s[i]; cout << '\n';
		for (int i = ans; i < s.size(); i++) cout << s[i]; cout << '\n';
	}
	else cout << "NO\n";
	return 0;
}