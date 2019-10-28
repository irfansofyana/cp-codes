#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int x;

int main(){
	OPTIMASI
	cin >> n;
	int temp;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		while (x%2==0) x/=2;
		while (x%3==0) x/=3;
		if (i==0) temp = x;
		else if (x!=temp) {
			puts("No"); return 0;
		}
	}
	puts("Yes");
	return 0;
}