#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,x,y,r;
int i,n,m;

int main(){
	OPTIMASI
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> x >> y >> r;
		cin >> n >> m;
		cout << "Kasus #" << ++tc << ": ";
		if ((x-n)*(x-n)+(y-m)*(y-m)==r*r) cout << "GARIS";
		else if ((x-n)*(x-n)+(y-m)*(y-m)>r*r) cout << "LUAR";
		else cout << "DALAM";
		cout << '\n';
	}
	return 0;
}