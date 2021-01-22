#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll ans,maks;
ll tmp,l,r,mid;
ll gold[100005],tempat[100005],energi[100005];
ll ene;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> tempat[i] >> gold[i] >> energi[i];
		gold[i] += (i==0 ? 0 : gold[i-1]);
		energi[i] += (i==0 ? 0: energi[i-1]);
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j <= i ; j++) {
			tmp = tempat[i]-tempat[j];
			ene = energi[i] - (j == 0 ? 0 : energi[j-1]);
			if (tmp <= ene) {
				ans = max(ans,gold[i]-(j==0 ? 0:gold[j-1]));
				break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}