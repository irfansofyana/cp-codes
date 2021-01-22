#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll nways[10005];
ll koin[23];

void generate(){
	for (i = 1 ; i <= 21 ; i++) koin[i] = i*i*i;
	nways[0] = 1;
	for (i = 1 ; i <= 21 ; i++) {
		ll c = koin[i];
		for (j = c ; j <= 10000 ; j++)
			nways[j] += nways[j-c];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	while (cin >> n) {
		cout << nways[n] << '\n';
	}
	return 0;
}