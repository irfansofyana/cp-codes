#include <iostream>
using namespace std;

int main()
{
	int p1, p2, p3, t1, t2, t, s = 0, ans = 0, n, l , r;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	for (int i = 0; i < n; i++){
		cin >> l >> r;
		t = l - s;
		if (i>0) ans += (t <= t1 ? t*p1 : (t1*p1 + (t - t1 <= t2 ? (t - t1)*p2 : (t2*p2 + (t - t1 - t2)*p3))));
		ans += (r - l)*p1;
		s = r;
	}
	cout << ans;
}