#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long ll;
ll n,i,j;
ll temp;

ll bs(ll l,ll r) {
	ll mid = (l+r)/2;
	if (l>r) return temp;
	else if (mid*(mid+1)>n) return bs(l,mid-1);
	else if (mid*(mid+1)<=n) {
		temp = mid;
		return bs(mid+1,r);
	}
}

int main(){
	OPTIMASI
	cin >> n;
	temp = -1;
	ll smt = bs(0,1000000000);
	ll sisa = n-smt*(smt+1);
	if (sisa<=smt) {
		cout << 2*smt+(sisa==0?0:1) << '\n';
		for (i = 1 ; i <= smt; i++) {
			if (i==sisa) cout << i << " " << i ;
			else cout << i ;
			cout << " ";
		}
		for (i = smt ; i>=1; i--) {
			cout << i ;
			cout << (i==1?'\n':' ');
		}
	}
	else {
		int j = sisa-(smt+1);
		cout << 2*smt+(j==0?1:2) << '\n';
		for (i = 1 ; i <= smt; i++) {
			if (i==j) cout << i << " " << i ;
			else cout << i ;
			cout << " ";
		}
		cout << smt+1 << " ";
		for (i = smt ; i>=1; i--) {
			cout << i ;
			cout << (i==1?'\n':' ');
		}
	}
	return 0;
}