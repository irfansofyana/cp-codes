#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s,tmp;
ll n,m,i,j,ans;
map<string,ll> mep;
bool udah;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	udah = false;
	tmp = "";
	while (getline(cin,s)){
		if (s[0] == '#') {
			mep[tmp] = n;
			n = 0;
			tmp = s.substr(2,(int)s.size()-2);
		}
		else if (s[0] == '!') {
			mep[tmp] = n;
			udah = true;
		}
		else {
			if (!udah) n++;
			else {
				i = 0; j = s.find('+',0);
				ans = 1;
				while (j >= 0 && j < s.size()){
					tmp = s.substr(i,j-1-i);
					ans *= mep[tmp];
					i = j + 2;
					j = s.find('+', j + 1);
				}
				tmp = s.substr(i,(int)s.size()-i);
				ans *= mep[tmp];
				cout << ans << '\n';
			}
		}
	}
	return 0;
}
