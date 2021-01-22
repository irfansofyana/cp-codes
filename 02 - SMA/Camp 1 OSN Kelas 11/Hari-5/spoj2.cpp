#include <bits/stdc++.h>
using namespace std;

int tc,n,m,i,j;
int k,idx,z;

int main(){
	cin.tie(0);
	cin >> tc;
	for (z = 0 ; z < tc ; z++) {
		cin >> n >> m;
		k = 1;
		for (i = 1 ; i <= 3*n+1 ; i++) {
			if (i==k) {
				for (j = 1 ; j <= 3*m+1 ; j++)
					cout << '*';
				cout << endl;
				k += 3;
			}
			else {
				idx = 1;
				for (j = 1 ; j<= 3*m+1 ; j++) {
					if (j==idx) {
						cout << '*';
						idx+=3;
					}
					else cout << '.';
				}
				cout << endl;
			}
		}
		if (z!=tc-1) cout << endl;
	}
	return 0;
}