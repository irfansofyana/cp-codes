#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll F[35],G[35],n,i,j;

void pre_compute(){
	F[0] = 1; F[1] = 0;
	G[0] = 0; G[1] = 1;
	for (i = 2 ; i <= 30 ; i++) {
		F[i] = F[i-2] + 2*G[i-1];
		G[i] = F[i-1] + G[i-2];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre_compute();
	while (cin >> n) {
		if (n == -1) return 0;
		else cout << F[n] << '\n';
	}
	return 0;
}
