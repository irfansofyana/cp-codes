#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const int MAXN = (int)2e5;

string a, b;
ll ans;
int satu[MAXN+5], nol[MAXN+5];

int query(int x,int y,int tipe){
	if (tipe == 0) {
		return (x == 0 ? nol[y] : nol[y] - nol[x-1]);
	}
	else return (x == 0 ? satu[y] : satu[y] - satu[x-1]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	for (int i = 0 ; i < b.size(); i++) {
		if (b[i] == '1') {
			if (i == 0) {
				satu[i] = 1;
				nol[i] = 0;
			}
			else {
				satu[i] = satu[i-1] + 1;
				nol[i] = nol[i-1];
			}
		}
		else {
			if (i == 0) {
				nol[i] = 1;
				satu[i] = 0;
			}
			else {
				nol[i] = nol[i-1] + 1;
				satu[i] = satu[i-1];
			}
		}
	}
	int ujung = (int)b.size() - (int)a.size();
	for (int i = 0 ; i < a.size(); i++) {
		if (a[i] == '0') {
			ans += 1ll*query(i, ujung, 1);
		}
		else ans += 1ll*query(i, ujung, 0);
		ujung++;
	}
	cout << ans << '\n';
	return 0;
}