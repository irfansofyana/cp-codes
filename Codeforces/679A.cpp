#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,k,i,j;
string perintah;
vector<int> primes;
bool bil[105];

void sieve(){
	memset(bil, 1, sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 100; i++) {
		if (bil[i]) {
			primes.pb(i);
			j = i;
			while (i * j <= 100) {
				bil[i * j] = false;
				j++;
			}
		}
	}
}

int main(){
	sieve();
	int tot = 0;
	for (i = 0 ; i < 15 ; i++) {
		cout << primes[i] << '\n';
		fflush(stdout);
		cin >> perintah;
		if (perintah == "yes") {
			tot++;
		}
		if (tot == 2) {
			cout << "composite\n";
			fflush(stdout);
			return 0;
		}
	}
	for (i = 2 ; i <= 7 ; i++) {
		if (i == 4 || i == 6) continue;
			cout << i*i << '\n';
			fflush(stdout);
			cin >> perintah;
			if (perintah == "yes") {
				cout << "composite\n";
				fflush(stdout);
				return 0;
			}
	}
	cout << "prime\n";
	fflush(stdout);
	return 0;
}