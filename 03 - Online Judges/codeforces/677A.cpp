#include <bits/stdc++.h>
using namespace std;

int i,j,n,h;
int ans;

int main(){
	scanf("%d %d", &n, &h);
	for (i = 0 ; i < n ; i++) {
		int temp;
		scanf("%d", &temp);
		ans += (temp > h ? 2 : 1);
	}
	printf("%d\n", ans);
	return 0;
}