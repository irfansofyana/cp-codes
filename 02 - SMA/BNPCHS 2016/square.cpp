#include <bits/stdc++.h>
using namespace std;

int tc,t,n,i,j;
int x,y,minix,maksx,miniy,maksy;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		minix = miniy = (int)1e9;
		maksx = maksy = -(int)1e9;
		for (i = 0 ; i < n ; i++) {
			cin >> x >> y;
			minix = min(minix,x);
			maksx = max(maksx,x);
			miniy = min(miniy,y);
			maksy = max(maksy,y);
		}
		cout << "Case #" << ++tc << ": " << max(abs(minix-maksx),abs(miniy-maksy))*max(abs(minix-maksx),abs(miniy-maksy)) << '\n';
	}
	return 0;
}
