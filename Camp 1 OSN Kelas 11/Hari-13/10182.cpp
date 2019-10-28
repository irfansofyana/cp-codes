#include <bits/stdc++.h>
using namespace std;

int tc,n,m;
int x,y;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		x = (n+m)/2; y = n-x;
		if (x<0 || y<0 || (n+m)%2!=0) puts("impossible");
		else cout << max(x,y) << " " << min(x,y) << endl;
	}
	return 0;
}