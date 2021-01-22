#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
int i,j,k,ans;
int bil;

int main(){
	scanf("%d %d %d %d", &n, &a, &b, &c);
	for (i=0;i<=c;i++) {
		bil = 2*n-4*i;
		if (bil<0) break;
		else {
			for (j=0;j<=b;j++) {
				if (bil-2*j>=0 && bil-2*j<=a) ans++;
			}
		}
	}
	printf("%d\n", ans);
}
