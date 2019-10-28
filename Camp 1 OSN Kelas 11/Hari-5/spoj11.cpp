#include <bits/stdc++.h>
using namespace std;

int n,k,x,i;
int ans;

int main(){
	scanf("%d %d", &n, &k);
	for (i =0 ; i < n ; i++) {
		scanf("%d",&x);
		if (x%k==0) ans++;
	}
	printf("%d\n", ans);
	return 0;
}