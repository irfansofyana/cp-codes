#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
vector<int> primes;
bool bilangan[10005];
string s;
map<string,bool> mep;

void sieve(){
	memset(bilangan,true,sizeof bilangan);
	bilangan[1] = false;
	for (i =2  ; i <= 10000; i++) {
		if (bilangan[i]) {
			j = i;
			while (i*j<=10000) {
				bilangan[i*j] = false;
				j++;
			}
		}
	}
}

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> n;
	while (n--) {
		cin >> k >> m;
		if (!bilangan[m]) {
			cout << k << " " << m << " NO\n"; 
		}
		else {
			s = ubah(m);
			mep.clear();
			while (!mep[s] && s!="1") {
				int res = 0;
				//cout << s << '\n';
				mep[s] = true;
				for (i = 0 ; i < s.size() ; i++) {
					res += ((int)s[i]-'0')*(int(s[i])-'0');
				}
				s = ubah(res);
			}
			if (s=="1") cout << k << " " << m << " YES\n";
			else cout << k << " " << m << " NO\n";
		}
	}
}