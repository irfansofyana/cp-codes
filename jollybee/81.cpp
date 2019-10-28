#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,ans;
ll i,t,tc,x,temp;
bool boleh[10];

int main(){
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(boleh,false,sizeof boleh);
		for (i = 1 ; i <= n ; i++) {
			cin >> x;
			boleh[x] = true;
		}
		ans = 0;
		temp = n;
		for (i = 1 ; i <= m ; i++) {
			if (i==1) ans += temp;
			else if (i>1 && boleh[0]) ans += temp-(temp/n);
			else if (i>1) ans += temp;
			temp *=n;
		}
		cout << ans << '\n';
	}
	return 0;
}