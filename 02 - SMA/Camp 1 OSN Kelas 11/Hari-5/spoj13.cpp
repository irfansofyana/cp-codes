#include <bits/stdc++.h>
using namespace std;

int a,b,c,maks;
int d;

int main(){
	cin.tie(0);
	while (cin >> a >> b >> c && a!=0 && b!=0 && c!=0) {
		maks = max(a,b);
		maks = max(maks,c);
		if (maks==a) d = b*b+c*c;
		else if (maks==b) d = a*a+c*c;
		else if (maks==c) d = b*b+a*a;
		if (maks*maks==d) puts("right");
		else puts("wrong");
	}
	return 0;
}