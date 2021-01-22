#include <bits/stdc++.h>
using namespace std;

int amp,frek,n,i,j;
int tc,z,zz;

int main(){
	cin.tie(0);
	cin >> tc;
	for (zz = 0 ; zz < tc ; zz++) {
		cin >> amp >> frek;
		for (z = 0 ; z < frek ; z++) {
			for (i = 1; i <= amp ; i++) {
				for (j = 1 ; j<= i ; j++)
					cout << i;
				cout << endl;
			}
			for (i = amp-1 ; i>=1  ; i--) {
				for (j = 1 ; j<= i ; j++)
					cout << i;
				cout << endl;
			}
			if (z!=frek-1) cout << endl;
		}
		if (zz!=tc-1) cout << endl;
	}
	return 0;
}