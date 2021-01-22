#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,i,j;
ll F[55];

void solve(){
	F[0] = 1;
	F[2] = 1; F[4] = 2;
	for (i = 6 ; i <= 50 ; i+=2){
		for (j = 2; j <= i ; j += 2){
			F[i] += F[j-2]*F[i-j];
		}
	}
	cout << F[n] << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	if (n & 1) {
		cout << 0 << '\n';
	}
	else solve();
	return 0;
}