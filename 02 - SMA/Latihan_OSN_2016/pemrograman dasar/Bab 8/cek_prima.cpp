#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool bil[1000005];
ll n,i,j;

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2; i <= 1000000 ; i++) {
		if (bil[i]) {
			j = i;
			while (i * j <= 1000000) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int main(){
	sieve();
	cin >> i;
	while (i--) {
		cin >> n;
		cout << (bil[n]?"YA":"BUKAN") << '\n';
	}
	return 0;
}