#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t,tc;
ll p,q,mini,maks,bil,bagi;
ll i,j,kali;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> p >> q;
		ll mini,maks;
		mini = maks = -1;
		bagi = 1;
		for (i = 0 ; i < q ; i++) bagi *= 2;
		for (i = 0 ; i < (1<<p); i++){
			bil = 0; kali = 1;
			for (j = 0 ; j < p; j++) {
				if ((i&(1<<j)) > 0) {	//use 2
					bil += kali*2;
				}
				else {		//use 1
					bil += kali;
				} 
				kali *= 10;
			}
			if (bil%bagi==0) {
				if (mini==-1 && maks==-1) {
					mini = bil;
					maks = bil;
				}
				mini = min(mini,bil);
				maks = max(maks,bil);
			}
		}
		cout << "Case " << ++tc << ": ";
		if (mini==maks && mini==-1) cout << "impossible\n";
		else if (mini==maks) cout << mini << '\n';
		else cout << mini << " " << maks << '\n';
	}
	return 0;
}