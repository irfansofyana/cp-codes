#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll r;
double ans;

int main(){
	int t;
	int tc = 0;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &r);
		r *= 2;
		ans =  r*r+ (0.25);
		printf("Case %d: %.2lf\n", ++tc, ans);
	}
	return 0;
}