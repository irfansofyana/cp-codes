#include <bits/stdc++.h>
using namespace std;

long long n,i,j,sum;
bool bil[2000010];

int main() {
	memset(bil,false,sizeof bil);
	for (i=2;i<=2000000;i++) {
		if (!bil[i]) {
			j = i;
			while (j*i<=2000000) {
				bil[j*i] = true;
				j++;
			}
			sum+=i;
		}
	}
	cout << sum << endl;
}
