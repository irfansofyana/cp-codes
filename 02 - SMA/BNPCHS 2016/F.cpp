#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll maks,mini,i,j;
ll a,b,n,mid,tmp,kiri,kanan;	
int t,tc;

bool can(ll x){
	if ((double)(x-1) >= (a - 2*b - x)/double(2*b)) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		maks = ((a-1)/(b+1)) + 1;
		kiri = 1; kanan = a;
		while (kiri <= kanan) {
			mid = (kiri + kanan)/2;
			if (can(mid)) {
				mini = mid;
				kanan = mid-1;
			}
			else kiri = mid + 1;
		}
		cout << "Kasus #" << ++tc << ": " << mini << " " << maks << '\n';
	}
	return 0;
}
