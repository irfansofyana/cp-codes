#include <bits/stdc++.h>
using namespace std;

int a,b;

int gcd(int a,int b){
	if (b==0) return a;
	return gcd(b,a%b);
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		scanf("%d %d", &a, &b);
		printf("%d %d\n", b/gcd(a,b), a/gcd(a,b));
	}
	return 0;
}