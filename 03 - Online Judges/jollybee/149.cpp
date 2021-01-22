#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "Kasus #" << ++tc << ": ";
		cout << (n%2==0?((n/2)-1)*((n/2)-1):((n+1)/2-1)*((n-1)/2-1)) << '\n';
	}
	return 0;
}