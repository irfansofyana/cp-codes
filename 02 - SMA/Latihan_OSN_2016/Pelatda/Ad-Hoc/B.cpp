#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,x;
string s;
ll frek[10];
ll banyak[100005][10];		

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	cin >> s;
	for (i = 0 ; i < s.size(); i++){
		frek[(int)s[i]-'0']++;
		for (j = 0 ; j <= 9 ; j++) {
			banyak[i][j] += frek[j];
		}
	}
	while (m--) {
		cin >> x;
		x--;
		ll ans = 0;
		ll bil = (int)s[x]-'0';
		for (i = 0 ; i <= 9; i++){
			if (i <= bil) {
				ans += banyak[x][i]*bil - i*banyak[x][i];
			}
			else if (i > bil) ans += banyak[x][i] * i - banyak[x][i]*bil;
		}
		cout << ans << '\n';
	}
	return 0;
}