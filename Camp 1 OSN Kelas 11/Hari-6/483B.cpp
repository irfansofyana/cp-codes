#include <bits/stdc++.h>
using namespace std;

int x,y,ja,jb;
int lo,hi,mid;
int i;

int main(){
	cin.tie(0);
	cin >> ja >> jb >> x >> y;
	lo = 1; hi = 1000000000;
	while (lo<=hi) {
		mid = (lo+hi)/2;
		if ((mid/x)+(mid/y)+1>ja+jb) hi = mid-1;
		else if ((mid/x)+(mid/y)+1<ja+jb) lo = mid+1;
		else if ((mid/x)+(mid/y)+1==ja+jb) {
			if ((mid/x)==ja) {cout << mid << endl; return 0;}
			else if ((mid/y)==jb) {cout << mid << endl; return 0;}
			else break;
		}
	}
	return 0;
}