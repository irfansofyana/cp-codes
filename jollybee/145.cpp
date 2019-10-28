#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int tc,t,n,i,j;
int x,y;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		x = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> y;
			if (y>=0) x+=y;
		}
		cout << "Kasus #" << ++tc << ": " << x << '\n';
	}
	return 0;
}