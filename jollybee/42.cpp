#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll t,tc,n,m,i,j;
ll butuh,k,ans;
ll A[11000],x;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		x = 0;
		for (i = 1 ; i<=n; i++) {
			cin >> A[i];
			x+=A[i];
		}
		butuh = 0;
		for (i = 1 ; i<=n ; i++) {
			cin >> k;
			butuh += k*x;
			x-=A[i];
		}
		i = 1;
		while (i*(i+1)<=2*butuh) i++;
		cout << "Case #" << ++tc << ": " << i << '\n';
	}
	return 0;
}