#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int ans[5005];
int tmp1, tmp2, tmp3;

int main(){
	scanf("%d", &n);
	printf("? 1 2\n");
	fflush(stdout);
	scanf("%d", &tmp1);
	printf("? 1 3\n");
	fflush(stdout);
	scanf("%d", &tmp2);
	printf("? 2 3\n");
	fflush(stdout);
	scanf("%d", &tmp3);
	int smt1 = tmp1 - tmp2;
	int smt2 = tmp3;
	ans[2] = (smt1 + smt2) >> 1;
	ans[3] = smt2 - ans[2];
	ans[1] = tmp1 - ans[2];
	for (i = 4 ; i <= n ; i++) {
		printf("? %d %d\n", i-1, i);
		fflush(stdout);
		scanf("%d", &tmp1);
		ans[i] = tmp1 - ans[i-1];
	}
	printf("!"); fflush(stdout); for (i = 1 ; i <= n ; i++) {
		printf(" %d", ans[i]);
	}
	printf("\n");
	fflush(stdout);
	return 0;
}