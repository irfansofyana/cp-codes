#include <bits/stdc++.h>
using namespace std;

int t,tc,n,x;

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &x);
		printf("Kasus #%d: ",++tc);
		if (n%x==0) printf("%d\n", n/x);
		else printf("%d\n", (n/x)+1);
	}
	return 0;
}