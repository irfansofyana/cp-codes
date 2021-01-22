#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll x,y;
bool row[100005],kolom[100005];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
	cin >> n >> m;
	memset(row, false , sizeof row);
	memset(kolom, false, sizeof kolom);
	ll ansr, ansk;
	ansr = n; ansk = n;
	while (m--) {
		cin >> x >> y;
		if (!row[x]) {
			ansr--;
			row[x] = true;
		}
		if (!kolom[y]) {
			ansk--;
			kolom[y] = true;
		}
		cout << ansr * ansk ;
		if (m == 0) cout << '\n';
		else cout << " " ;
	}
	return 0;
}
