#include <bits/stdc++.h>
using namespace std;

int t;
unsigned long long x,y,tot;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if (x > y && x - y >= 2 ) cout << "Tere\n";
		else if (y > x && y - x >= 2) cout << "Toni\n";	
		else cout << "Voting Ulang\n";
	}
	return 0;
}
