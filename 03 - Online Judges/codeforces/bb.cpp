#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll a,b,c;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0; i <= n/1234567; i++) {
		a = i;
		ll tmp = n-1234567*i;
		for (j = 0 ; j <= tmp/123456; j++) {
			if ((tmp - 123456*j)%1234 == 0) {
				puts("YES");
				//cout << i << " " << j << " " << (tmp-123456*j)/1234 << '\n';
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}