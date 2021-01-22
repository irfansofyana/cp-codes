#include <bits/stdc++.h>
using namespace std;

int a,b,c;
int ans;
bool found=false;
int main() {
	for (a=1;a<=333;a++) {
		for (b=a+1;b<=999 && (1000-(b+a)>b); b++)
			if (a*a+b*b==(1000-(b+a))*(1000-(a+b))) {
				c = (1000-(b+a));
				cout << a << " " << b << " " << c << endl; 
				cout << a*b*c << endl;
				found = true;
				break;
			}
		if (found) break;
	}
	return 0;
}
