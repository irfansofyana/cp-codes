#include <bits/stdc++.h>
using namespace std;

long long a,b,temp,kali;
int TC;

int main(){
	scanf("%d", &TC);
	while (TC--) {
		scanf("%lld %lld", &a, &b);
		kali = a*b;
		while (b!=0) {
			temp = a;
			a = b;
			b = temp%b;
		}
		printf("%lld %lld\n", a,(kali)/a);
	}
	return 0;
}