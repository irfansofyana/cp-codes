#include <bits/stdc++.h>
using namespace std;

int t,l,r,j,x;
string s;

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> l >> r >> j >> x >> s;
		if (s=="kabur") cout<<-1*j*l*r<<endl;
		else cout<<x-l*j*r<<endl;
	}	
	return 0;
}
