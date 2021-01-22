#include <bits/stdc++.h>
using namespace std;

int maksA,maksB,maksC,maksD;
int n,i,j,x,m;

int main(){
	int t;
	cin >> t;
	while(t--) {
		cin >> m >> n;
		maksA = -1 ; maksB = 100000000;
		maksC = 100000000; maksD = -1;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			if (x<=m/2) {
				maksA = max(x,maksA);
				maksC = min(x,maksC);
			}
			else {
				maksB = min(maksB,x);
				maksD = max(x,maksD);
			}
		}
		cout << max(maksA,m-maksB) << " " << max(m-maksC,maksD) << '\n';
	}
	return 0;
}