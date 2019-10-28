#include <bits/stdc++.h>
using namespace std;

int a,b;
int t,tc;

int main(){
	cin >> t;
	while (t--) {
		cin >> a >> b;
		a+=b;
		if (a<0) a+=24;
		else if (a>=24) a-=24;
		cout << "Case #" << ++tc << ": " ;
		if (a<10) cout << '0' << a ;
		else cout << a;
		cout << '\n';
	}
	return 0;
}