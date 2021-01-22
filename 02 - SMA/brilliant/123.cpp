#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
bool bil[123456790];
ll ans;

void sieve(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i <= 123456789 ; i++) {
		if (bil[i]) {
			ans++;
			j = i;
			while (i*j <= 123456789) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	sieve();
	cout << ans << '\n';
}