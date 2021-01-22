#include <bits/stdc++.h>
using namespace std;

long long n;

int main(){
	while (scanf("%lld", &n) != EOF){
		printf("%lld\n", (n/9)*81 + (n%9)*(n%9));
	}
	return 0;
}