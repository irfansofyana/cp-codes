#include <bits/stdc++.h>
using namespace std;

int s,d;
int a,b;
int t;

int main(){
	cin >> t;
	while (t--) {
		cin >> s >> d;
		a = (s+d)/2;
		b = (s-d)/2;
		if (a>=0 && b >=0 && ((s+d)%2==0) && ((s-d)%2==0)) cout << a << " " << b << '\n';
		else cout << "impossible\n";
	}
	return 0;
}