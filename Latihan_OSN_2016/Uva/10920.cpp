#include <bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;

ll n,m,i,j;
ll ukuran,bilangan;

pl cari(ll _size,ll dalam){
	ll pkatas = _size*_size;
	ll pkbawah = pkatas-(_size-1);
	ll pkibawah = pkbawah-(_size-1);
	ll pkiatas = pkibawah-(_size-1);
	ll tambahan = pkiatas-(_size-2);
	ll baris,kolom;
	if (_size==1) {
		baris = _size + dalam -1; kolom = _size + dalam -1;
		return mp(baris,kolom);
	}
	if (pkatas >= bilangan && bilangan >= pkbawah)  {
		kolom = _size + dalam - 1; baris = _size + dalam-1 - (pkatas-bilangan);
		return mp(baris,kolom);
	}
	if (pkbawah > bilangan && bilangan >= pkibawah) {
		baris = dalam;  kolom = _size + dalam - 1 - (pkbawah-bilangan);
		return mp(baris,kolom);
	}
	if (pkibawah > bilangan && bilangan >= pkiatas) {
		kolom = dalam; baris = dalam + pkibawah - bilangan;
		return mp(baris,kolom);
	}
	if (pkiatas > bilangan && bilangan >= tambahan) {
		baris = _size + dalam -1; kolom = dalam + pkiatas - bilangan;
		return mp(baris,kolom);
	}
	return cari(_size-2,dalam+1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> ukuran >> bilangan) {
		if (ukuran == 0 && bilangan ==0) return 0;
		pl jaw = cari(ukuran,1);
		cout << "Line = " << jaw.first << ", column = " << jaw.second << ".\n";
	}
	return 0;
}