#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	return (b == 0 ? a : gcd(b, a%b));
}

int main(){
	int t, tc=0;
	scanf("%d", &t);
	while (t--) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (c%__gcd(a,b) == 0) printf("Case %d: Yes\n", ++tc);
		else printf("Case %d: No\n", ++tc);
	}
}
