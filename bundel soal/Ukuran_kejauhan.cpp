#include <bits/stdc++.h>
using namespace std;
int t,n,i,j,k;
int main(){
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		k=(int)sqrt(n);
		printf("%d^2 = %d\n",k,k*k);
	}
	return 0;
}
