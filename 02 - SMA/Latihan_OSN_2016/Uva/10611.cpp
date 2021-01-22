#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll A[50005];
ll bawah,atas;

ll _lower(ll awal,ll akhir){
	ll mid = (awal + akhir)/2;
	if (awal > akhir) return bawah;
	if (A[mid] >= m) return _lower(awal,mid-1);
	if (A[mid] < m) {
		bawah = mid;
		return _lower(mid+1,akhir);
	}
}

ll _upper(ll awal,ll akhir) {
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return atas;
	if (A[mid] <= m) return _upper(mid+1,akhir);
	if (A[mid] > m) {
		atas = mid;
		return _upper(awal,mid-1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	ll q;
	cin >> q;
	while (q--) {
		cin >> m;
		bawah = atas = -1;
		if (_lower(0,n-1)==-1) cout << "X ";
		else cout << A[_lower(0,n-1)] << " ";
		if (_upper(0,n-1)==-1) cout << "X\n";
		else cout << A[_upper(0,n-1)] << '\n';
	}
	return 0;
}