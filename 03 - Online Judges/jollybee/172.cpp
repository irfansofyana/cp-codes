#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,q,i,j,v,b,c;
ll A[100005],temp;

bool comp(ll a,ll b){
	return a>b;
}

ll bawah(ll kiri, ll kanan, ll bil){
	ll mid = (kiri+kanan)/2;
	if (kiri>kanan) return temp;
	else if (v/A[mid]>=bil) {
		temp = mid;
		return bawah(kiri,mid-1,bil);
	} 
	else if (v/A[mid]<bil) {
		return bawah(mid+1,kanan,bil);
	}
}

ll atas(ll kiri,ll kanan,ll bil) {
	ll mid = (kiri+kanan)/2;
	if (kiri>kanan) return temp;
	else if (v/A[mid]>bil) {
		return atas(kiri,mid-1,bil);
	}
	else if (v/A[mid]<=bil) {
		temp = mid;
		return atas(mid+1,kanan,bil);
	}
}

int main(){
	OPTIMASI
	cin >> n >> q;
	for (i = 0 ; i < n ; i++)
		cin >> A[i];
	sort(A,A+n,comp);
	while (q--) {
		cin >> v >> b >> c;
		temp = -1999999;
		ll ans1 = bawah(0,n-1,b);
		temp = 1999999;
		ll ans2 = atas(0,n-1,c);
		if (ans1!=-1999999 && ans2!=1999999) cout << ans2-ans1+1 << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}