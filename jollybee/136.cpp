#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD 1000000007
using namespace std;

typedef long long ll;
ll t,n,i;
ll f[100005];

void isi(){
	f[1] = 1; f[2] = 5;
	for (i = 3 ; i <= 100000; i++) {
		f[i] = 2*f[i-1]+f[i-2];
		f[i] %= MOD;
	}
}
int main(){
	OPTIMASI
	isi();
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n;
		cout << "Kasus #" << ++tc << ": " << f[n] << '\n';
	}
	return 0;
}