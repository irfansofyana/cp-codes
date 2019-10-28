#include <bits/stdc++.h>
using namespace std;

int t, tc, n, k;

int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%d %d", &n, &k);
		if (n%(k+1) == 0)
			printf("Kasus #%d: ya\n", ++tc);
		else 
			printf("Kasus #%d: tidak\n", ++tc);
	}
}