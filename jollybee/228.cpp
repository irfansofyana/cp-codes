#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int x;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		cin >> x;
		if (i==1) j = x;
		else {
			if (x%2==0 && j%2==0) {
				puts("0"); return 0;
			}
			else if (x%2==1 && j%2==1) {
				puts("0"); return 0;
			}
			else j = x;
		}
	}
	puts("1");
	return 0;
}