#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll i,j,t,n,k;
bool bil[10000005];

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = false;
	bil[1] = false;
	for (i = 2 ; i <= 10000000 ; i++) {
		if (bil[i]) {
			j = i;
			while (i*j <= 10000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (k >= 3) cout << "Tidak\n";
		else {
			if (k==0 && n >= 2) cout << "Tidak\n";
			else if (k==0) cout << "Ya\n";
			else if (k==1 && bil[n]) cout << "Ya\n";
			else if (k==1) cout << "Tidak\n";
			else if (k==2 && bil[n]) cout << "Tidak\n";
			else if (k==2 && n==1) cout << "Tidak\n";
			else cout << "Ya\n";
		}
	}
	return 0;
}
