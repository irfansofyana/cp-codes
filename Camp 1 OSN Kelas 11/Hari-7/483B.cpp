#include <bits/stdc++.h>
using namespace std;

long long x,y,ja,jb,irisan;
long long lo,hi,mid;
long long i,ta,tb,ans;

int main(){
	cin.tie(0);
	cin >> ja >> jb >> x >> y;
	lo = 0; hi = 2e9;
	ans = 2000000000;
	while (lo<hi) {
		mid = (lo+hi)/2;
		if (mid-(mid/(x*y))>=ja+jb && mid-(mid/x)>=ja && mid-(mid/y)>=jb) {
			hi = mid;
		}
		else lo = mid+1;
	}
	cout << hi << endl;
	return 0;
}