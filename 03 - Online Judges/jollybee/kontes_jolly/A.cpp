#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,kuat;
ll m,tot;
map<string,int> mep;
string s[]={"Normal","Fighting","Flying","Poison","Ground","Rock","Bug","Ghost","Steel","Fire","Water",
"Grass","Electric","Psychic","Ice","Dragon","Dark","Fairy","Legend"};
string nama,ans;
ll poke[]={1000,2000,3000};
string ponem[]={"poke","great","ultra","master"};
ll pengali[]={1,2,3,100};

void isi(){
	ll x = 100;
	for (i = 0 ; i < 18; i++) {
		mep[s[i]] = x;
		x+=100;;
	}
	mep[s[18]] = 10000;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	isi();
	for (i = 0 ; i < n ; i++) {
		cin >> nama >> kuat;
		ans = nama;
		ll kali=1;
		if (nama!="Legend") {
			for (j = 0 ; j < 3; j++) {
				if (poke[j]>=kuat) {
					ans = ans+" ";
					ans = ans+ ponem[j];
					kali = pengali[j];
					break;
				}
			}
		}
		else {
			kali = 100;
			ans = ans + " master";
		}
		tot += mep[nama]*kali;
		ans = ans+" ball";
		cout << ans << '\n';
	}
	cout << tot << '\n';
	return 0;
}