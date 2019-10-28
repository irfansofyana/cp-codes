#include <bits/stdc++.h>
using namespace std;

int t,n;

int main(){
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		if (n<=5) puts("YA");
		else if (n%6==0) puts("TIDAK");
		else puts("YA");
	}
	return 0;
}