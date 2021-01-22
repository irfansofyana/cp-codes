#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,ans, maks;
ll frek[4005];
ll panjang1, panjang2;
ll maks_frek;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		ll x;
		cin >> x;
		frek[x]++;
	}
	maks = -1;
	maks_frek = 0;
	for (i = 2 ; i <= 4000; i++) {
		ans = 0;
		for (j = 1; j <= 2000 ; j++) {
			//target tinggi = i
			if (2*j <= i) {
				panjang1 = frek[j];
				panjang2 = frek[i-j];
				if (j == i-j) ans += panjang1/2;
				else {
					if (panjang2 < panjang1) ans += panjang2;
					else ans += panjang1;
				}
			}	
			else break;
		}
		if (ans > maks) {
			maks = ans;
			maks_frek = 1;
		}
		else if (ans == maks){
			maks_frek++;
		}
	}
	cout << maks << " " << maks_frek << '\n';
	return 0;
}