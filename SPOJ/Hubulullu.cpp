#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,n,k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (k == 0) cout << "Airborne wins.\n";
		else cout << "Pagfloyd wins.\n";
	}
	return 0;
} 
