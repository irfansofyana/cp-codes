#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll t,n,i,j;
ll A[100005];

void isi(){
	for (i = 1 ; i<= 100000; i++) {
		A[i] = (i*(i+1))/2;
	}
}

bool cari(ll kiri,ll kanan,ll bil){
	ll mid = (kiri+kanan)/2;
	if (kiri>kanan) return false;
	else if (A[mid]==bil) return true;
	else if (A[mid]>bil) return cari(kiri,mid-1,bil);
	else return cari(mid+1,kanan,bil);
}

int main(){
	OPTIMASI
	isi();
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n;
		bool ans = false;
		for (i = 1 ; i <= 100000; i++) {
			if (A[i]<=n) {
				if (cari(1,100000,n-A[i])) {
					ans = true;
					break;
				} 
			}
		}
		cout << "Case #" << ++tc << ": " << (ans==true?"DAHSYAT":"TIDAK DAHSYAT") << '\n';
	}
	return 0;
}