#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int x,sum;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n; sum = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			sum += x;
		}
		cout << "Case #" << ++tc << ": " ;
		if (sum <= 16000) cout << "16GB\n";
		else if (sum <= 32000) cout << "32GB\n";
		else if (sum <= 64000) cout << "64GB\n";
		else cout << "128GB\n";
	}
	return 0;
}