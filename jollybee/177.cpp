#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

double a,b,s,temp;
ll m,mid,lo,hi,ans;

int main(){
	OPTIMASI
	cin >> m >> a >> b >> s;
	lo = 1; hi = m;
	while (lo<=hi) {
		mid = (lo+hi)/2;
		temp = (double)mid*(a+((double)(mid-1)*b+a))/2;
		if (temp <= s) {
			ans = max(ans,mid);
			lo = mid+1;
		}
		else hi = mid-1;
	}
	cout << ans << '\n';
	return 0;
}