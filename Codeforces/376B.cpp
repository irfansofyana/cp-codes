#include <bits/stdc++.h>
using namespace std;

int n,i,j,m;
int x,y;
int tot[105];

int main(){
	scanf("%d %d", &n, &m);
	memset(tot, 0, sizeof tot);
	for (i = 0 ; i < m ; i++){
		int nilai;
		scanf("%d %d %d", &x, &y, &nilai);
		tot[x] += nilai;
		tot[y] -= nilai;
	}
	int ans = 0;
	for (i = 1; i <= n ; i++) {
		if (tot[i] > 0) ans += tot[i];
	}
	cout << ans << '\n';
	return 0;
}