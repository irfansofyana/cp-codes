#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n;
int a,b,c,d;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> a >> b;
		c = 0 ; d = 0;
		while (a>0) {
			c += a%10;
			a/=10;
		}
		while (b>0) {
			d += b%10;
			b/=10;
		}
		cout << "Case #" << ++tc << ": " << c*d << '\n'; 
	}
	return 0;
}