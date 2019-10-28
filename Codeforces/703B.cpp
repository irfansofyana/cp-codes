#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,k,lo,hi;
ll sum,cantik[100005];
ll x,ans,tmp,lastt;
bool udah[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) {
		cin >> cantik[i];
		sum += cantik[i];
	}
	memset(udah, false, sizeof udah);
	for (i = 0 ; i < k ; i++) {
		cin >> x;
		x--;
		udah[x] = true;
		tmp = sum - cantik[x] - lastt;
		ans += tmp * cantik[x];
		lastt += cantik[x];
	}
	for (i = 0 ; i < n ; i++) {
		lo = i;
		hi = (i + 1)%n;
		if (udah[lo] || udah[hi]) continue;
		else ans += cantik[lo]*cantik[hi];
	}
	cout << ans << '\n';
	return 0;
}
