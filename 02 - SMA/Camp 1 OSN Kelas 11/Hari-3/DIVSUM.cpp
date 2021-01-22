#include <bits/stdc++.h>
using namespace std;

int TC,n,i,j;
long long sum;

int main(){
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d", &n);
		sum = 0;
		for (i = 1; i <= (int)sqrt(n) ;i++) {
			if (n%i==0) {
				j = (n/i);
				if (i!=j) {
					sum+=i+j;
				} 
				else sum+=i;
			}
		}
		printf("%d\n", sum-n);
	}
	return 0;
}