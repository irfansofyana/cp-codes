#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,ans=0;
	for (i = 1 ; i<= 2013 ; i++) {
		if (i%3==0 || i%5==0 || i%7==0) {
			if ((i%21!=0) && (i%35!=0) ) {
				ans ++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}