#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int primes[2005],frek;
bool bil[1205];
bool sudah[2005];
int memo[1125][200][15];

void sieve(){
	memset(bil,true,sizeof bil);
	bil[0] = bil[1] = false;
	for (i = 2 ; i <= 1200; i++) {
		if (bil[i]) {
			primes[frek++] = i;
			j = i;
			while (i * j <= 1200) {
				bil[i*j] = false;
				j++;
			}
		}
	}
}

int cari(int n,int idx,int k){
	if (memo[n][idx][k] != -1) return memo[n][idx][k];
	if (idx == frek && n == 0 && k == 0) return 1;
	if (idx == frek) return 0;
	if (k == 0) return memo[n][idx][k] = cari(n, idx+1, 0);
	int res = 0;
	if (primes[idx] > n) return memo[n][idx][k] = cari(n, idx+1, k);
	return memo[n][idx][k] = cari(n-primes[idx], idx+1, k-1) + cari(n, idx+1, k);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	while (cin >> n >> k) {
		if (n == 0 && k == 0) return 0;
		memset(memo,-1,sizeof memo);
		cout << cari(n,0,k) << '\n';
	}
	return 0;
}