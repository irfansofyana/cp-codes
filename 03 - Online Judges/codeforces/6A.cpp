#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
bool ans=false;

int main(){
	cin >> a >> b >> c >> d;
	if (b+c>d && b+d>c && c+d>b) ans = true;
	else if (a+c>d && a+d>c && c+d>a) ans = true;
	else if (a+b>d && a+d>b && b+d>a) ans = true;
	else if (a+b>c && a+c>b && b+c>a) ans = true;
	if (ans) puts("TRIANGLE");
	else {
		if (b+c>=d && b+d>=c && c+d>=b) ans = true;
		else if (a+c>=d && a+d>=c && c+d>=a) ans = true;
		else if (a+b>=d && a+d>=b && b+d>=a) ans = true;
		else if (a+b>=c && a+c>=b && b+c>=a) ans = true;
		if (ans) puts("SEGMENT");
		else puts("IMPOSSIBLE");	
	}
	return 0;
}
