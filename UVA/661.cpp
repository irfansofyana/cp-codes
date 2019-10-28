#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,c;
ll kuat[1005];
ll tc,ans,noww;
bool kondisi[1005];
ll i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m >> c){
		if (n==0 && m==0 && c==0) return 0;
		ans = -10000000000; 
		memset(kondisi,false,sizeof kondisi); 
		noww = 0; 
		bool ada = true;
		for (i = 0 ; i < n ; i++) 
			cin >> kuat[i];
		for (i = 0 ; i < m ; i++) {
			ll x;
			cin >> x;
			x--;
			if (!kondisi[x]) {
				noww += kuat[x];
				kondisi[x] = true;
			}
			else if (kondisi[x]){
				noww -= kuat[x];
				kondisi[x] = false;
			}
			if (noww>c) {
				ada = false;
			}
			ans = max(noww,ans);
		}
		cout << "Sequence " << ++tc << '\n';
		if (!ada) cout << "Fuse was blown." << '\n';
		else {
			cout << "Fuse was not blown."  << '\n'; 
			cout << "Maximal power consumption was " << ans << " amperes." << '\n';
		}
		cout << '\n';
	}
	return 0;
}