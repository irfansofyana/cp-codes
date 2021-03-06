#include <bits/stdc++.h>
#define MAXN 100005
#define LL long long

using namespace std;


int n, x, y, a[MAXN], b[MAXN], c[MAXN];

int main() {
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i];
		c[i] = b[i] - a[i];
	}
	sort(c + 1, c + 1 + n, greater<int>());

	long long res = -1;
	for (int i = 1; i <= y; i++) {
		sum += c[i];
		if (i >= n - x)
			res = max(res, sum);
	}

	cout << res << endl;
    return 0;
}