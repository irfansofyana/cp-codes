#include <bits/stdc++.h>
using namespace std;

int ans,x;

int main(){
	scanf("%d", &x);
	while (x!=1) {
		if (x%2==1) x++;
		else x/=2;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}