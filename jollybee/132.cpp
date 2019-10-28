#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll t,n,i,j,m;
ll tc;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		j = 1;
		for (i = 1 ; i<=n ; i++){
			j*=10;
			j%=m;
		}
		cout << "Kasus #" << ++tc << ": " << j%m << '\n';
	}
	return 0;
}