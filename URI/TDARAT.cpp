#include <bits/stdc++.h>
using namespace std;

int TC,a,b,c,d,pemb,peny;
char ch,op;

int gcd(int a,int b){
	if (b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	cin.tie(0);
	cin >> TC;
	while (TC--) {
		cin >> a >> ch >> b >> op >> c >> ch >> d;
		//cout << a << " " << b << " " << c << " " << d << " " << op << endl;
		if (op=='+') {
			pemb = a*d+b*c;
			peny = b*d; 
			int fpb = gcd(pemb,peny);
			cout << pemb << '/' << peny << " = " << pemb/fpb << '/' << peny/fpb << endl;
		}
		else if (op=='-') {
			peny = b*d;
			pemb = a*d-b*c;
			int fpb = gcd(pemb,peny);
			cout << pemb << '/' << peny << " = " << pemb/fpb << '/' << peny/fpb << endl;
		}
		else if (op=='*') {
			pemb = a*c;
			peny = b*d;
			int fpb = gcd(pemb,peny);
			cout << pemb << '/' << peny << " = " << pemb/fpb << '/' << peny/fpb << endl;
		}
		else if (op=='/') {
			pemb = a*d;
			peny = b*c;
			int fpb = gcd(pemb,peny);
			cout << pemb << '/' << peny << " = " << pemb/fpb << '/' << peny/fpb << endl;
		}
	}
	return 0;
}