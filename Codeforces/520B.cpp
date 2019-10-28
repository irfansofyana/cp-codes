#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int main () {
	scanf ("%d %d", &n, &m);
	if (n>=m) ans = n-m;
	else {
		while (m!=n) {
			if (m%2==0 && m>n) m/=2;
			else m++;
			ans++;
		}
	}
	printf ("%d\n", ans);
	return 0;
}
