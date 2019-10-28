#include <bits/stdc++.h>
using namespace std;

int tc,n,m,i,j;
int x,y;

int main(){
	cin >> tc;
	while (tc--) {
		cin >> n >> m >> x >> y;
		for (i = 1 ; i <= n ; i++) {
			if (i==x) for (j = 1 ; j<= m ; j++) cout << '*';
			else {
				for (j = 1 ; j <= m ; j++) {
					if (j==y) cout << '*';
					else cout << '.';
				}
			}
			cout << endl;
		}
	}
	return 0;
}