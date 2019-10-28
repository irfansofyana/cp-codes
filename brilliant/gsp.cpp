#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,k;
ll A[105];
ll x,ans;

int main(){
	for (i = 1 ; i <= 100 ; i++) cin >> A[i];
	ans = -2000000000;
	for (i = 1 ; i <= 100 ; i++) {
		for (j = i ; j <= 100; j++) {
			x = 1;
			for (k = i ; k <= j ; k++) x*= A[k];
			ans = max(ans,x);
		}
	}
	cout << ans << '\n';
}