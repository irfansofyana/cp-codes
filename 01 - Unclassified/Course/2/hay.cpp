#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,numb;
map<string,ll> mep;
string s,inp,tmp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		cin >> s >> numb;
		mep[s] = numb;
	}
	while (m--) {
		inp = "";
		ll ans = 0;
		while (getline(cin,s)){
			if (s == ".") break;
			else {
				inp += s;
				inp += ' ';
			}
		}
		i = inp.find(' ');
		j = 0;
		while (i >= 0 && i < inp.size()){
			tmp = inp.substr(j,i-j);
			//cout << tmp << '\n';
			ans += mep[tmp];
			j = i+1;
			i = inp.find(' ',i+1);
		}
		tmp = inp.substr(j,(int)tmp.size()-j);
		//cout << tmp << '\n';
		ans += mep[tmp];
		cout << ans << '\n';
	}
	return 0;
}