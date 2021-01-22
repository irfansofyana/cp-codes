#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m;
		cout << "Kasus #" << ++tc << ": " << n*m << '\n';
	}
	return 0;
}