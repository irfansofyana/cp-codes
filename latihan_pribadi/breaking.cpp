#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

long long tc,t,n;
long long i,j,temp,tmaks;
bool bil[50005];
vector<long long> prime;
long long ans[50005];

void sieve(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i <= 50000 ; i++) {
		if (bil[i]) {
			prime.push_back(i);
			j = i;
			while (j*i<=50000) {
				bil[j*i] = false;
				j++;
			}
		}
	}
}

void isi(){
	for (i = 1 ; i <= 50000; i++) {
		if (bil[i]) ans[i] = i;
		else {
			temp = i; tmaks = 0;
			for (j = 0 ; j < prime.size() && temp>1; j++) {
				if (temp%prime[j]==0) {
					while (temp%prime[j]==0) {
						temp /= prime[j];
					}
					tmaks = max(tmaks,prime[j]);
				}
			}
			ans[i] = tmaks;
		}
	}
}

int main(){
	OPTIMASI
	sieve(); isi();
	cin >> t;
	while (t--) {
		cin >> n; tmaks = -1;
		for (i = 1 ; i <= n ; i++) tmaks = max(tmaks,ans[i]);
		cout << "Case #" << ++tc << ": " << tmaks << '\n';
	}
	return 0;
}