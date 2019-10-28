#include <bits/stdc++.h>
using namespace std;

bool prima[1000005];
long long n,k,t;

void sieve(){
	long long z,zz;
	memset(prima,true,sizeof prima);
	prima[1] = false;
	for (z=2;z<=1000000;z++) {
		if (prima[z]) {
			zz = z;
			while (zz*z<=1000000) {
				prima[zz*z] = false;
				zz++;
			}
		}
	}
}
int main(){
	cin.tie(0);
	sieve();
	cin >> t;
	while (t--) {
		cin >> n;
		k = (long long)sqrt(n);
		if (k*k!=n) puts("NO");
		else if (k*k==n && prima[k]) puts("YES");
		else puts("NO");
	}
	return 0;
}

