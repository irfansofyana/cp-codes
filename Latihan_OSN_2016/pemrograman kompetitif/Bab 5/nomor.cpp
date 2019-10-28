#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll nomor[15];
ll n,m,i,j,mini,awal,prev;
ll sum_before,maksdig;
ll jaw[15];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i <= n ; i++) {
		cin >> nomor[i];
		if (i==0) mini = nomor[i];
		else mini = min(mini,nomor[i]);
	}
	cin >> m;
	maksdig = m/mini; awal = m/mini;
	if (awal==0) {cout << -1 << '\n'; return 0;}
	memset(jaw,-1,sizeof jaw);
	for (i = n ; i >= 0; i--) {
		if (nomor[i]!=mini) {
			ll temp = nomor[i]-mini;
			ll bilangan = m-(sum_before+mini*maksdig);
			jaw[i] = bilangan/temp;
			maksdig -= (bilangan/temp);
			sum_before += (bilangan/temp)*nomor[i];
			prev += bilangan/temp;
			jaw[i] = bilangan/temp;
		}
	}
	for (i = n ; i >= 0 ; i--) {
		if (jaw[i]==-1) jaw[i] = awal-prev;
		cout << jaw[i] << " ";
	}cout << '\n';
	return 0;
}