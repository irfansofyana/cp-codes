#include <bits/stdc++.h>
using namespace std;

int a[2], b[2];
int n, m, x;

int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		a[x%2]++;
	}
	for (int i = 0; i < m; i++){
		scanf("%d", &x);
		b[x%2]++;
	}
	int ans = min(a[0], b[1]) + min(a[1], b[0]);
	printf("%d\n", ans);
	return 0;
}