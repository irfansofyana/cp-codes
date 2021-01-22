#include <bits/stdc++.h>
using namespace std;

int n,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		if (i%2 == 1) {
			cout << "I hate";
		}
		else if (i%2 == 0) {
			cout << "I love";
		}
		if (i == n) cout << " it\n";
		else cout << " that ";
	}
	return 0;
}
