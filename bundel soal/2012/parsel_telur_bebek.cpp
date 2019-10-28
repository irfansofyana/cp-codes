#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,A[500000],i;
ll ans,awal,akhir,sakhir;
ll tengah,acuan,kurang,lebih;
bool sudah;

ll fungsi(ll bil){
	ll res=0;
	for (ll z = 0 ; z < n ; z++) {
		res += (bil/A[z]);
	}
	return res;
}

int main(){
	scanf("%lld %lld" ,&n ,&m);
	for (i = 0 ; i < n ; i++) {
		scanf("%lld", &A[i]);
	}
	sort(A,A+n);
	awal = 1; akhir = 1;
	for (i = 1; i <= 40; i++) akhir*=2;
	sudah = false;
	awal = 1; sakhir = akhir;
	while (awal<=akhir) {
		tengah = (awal+akhir)/2;
		if (fungsi(tengah)<m) {
			if (!sudah) {
				sudah = true;
				kurang = tengah;
			}
			else if (tengah>kurang) kurang = tengah;
			awal = tengah+1;
		}
		else if (fungsi(tengah)>=m) {
			akhir = tengah-1;
		}
	}
	//cout << kurang << endl;
	awal = 1; sudah = false;
	while (awal<=sakhir) {
		tengah = (awal+sakhir)/2;
		if (fungsi(tengah)<=m) awal = tengah+1;
		else {
			if (!sudah) {
				sudah = true;
				lebih = tengah;
			}
			else if (tengah<lebih) lebih = tengah;
			sakhir = tengah-1;
		}
	}
	cout << lebih-1-(kurang+1)+1 << endl;
	return 0;
}
