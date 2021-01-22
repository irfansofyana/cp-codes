#include <bits/stdc++.h>
using namespace std;

int tc,n,m,i,j;
int z;

int main(){
	cin.tie(0);
	cin >> tc;
	for (z = 0 ; z < tc ; z++){
		cin >> n >> m;
		for (i = 0; i < n ; i++) {
			if (i%2==0) {
				for (j = 0 ; j < m ; j++) {
					if (j%2==0) cout << '*';
					else cout << '.';
				}
				cout << endl;
			}
			else {
				for (j = 0 ; j < m ; j++) {
					if (j%2==0) cout << '.' ;
					else cout << '*';
				}
				cout << endl;
			}
		}
		if (z!=tc-1) cout << endl;
	}
	return 0;
}