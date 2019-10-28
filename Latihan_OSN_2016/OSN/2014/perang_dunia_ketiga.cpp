#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string dummy;
ll n,m,i,j;
ll A[2000005];
ll tot,ans;
ll temp;
ll banyak[2000005],jumlah[2000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
		banyak[A[i]]++;
	}
	for (i = 1 ; i <= 2000000; i++) {
		jumlah[i] = jumlah[i-1] + banyak[i]*i;
	}
	
	for (i = 1 ; i <= 2000000 ; i++) {
		banyak[i] += banyak[i-1];
	}
	
	/*for (i = 1 ; i <= 10 ; i++) {
		cout << jumlah[i] << " " << banyak[i] << '\n';
	}*/
	
	for (i = 1 ; i <= 1000000; i++) {
			tot = 0;
			temp = i;
			while (temp <= 2000000) {
				ll smt = temp/i;
				if (temp!=i) tot += (banyak[temp]-banyak[temp/2])*temp-(jumlah[temp]-jumlah[temp/2]);
				else tot += (banyak[temp])*temp-(jumlah[temp]);
				temp *= 2;
			}
			if (i==1) ans = tot;
			else ans = min(ans,tot);
	}
	cout << ans << '\n';
	return 0;
}