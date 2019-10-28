#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

ll N;
ii arr[25];

void isi(){
	arr[1] = {10,1};
	arr[2] = {10,5};
	arr[3] = {10,6};
	arr[4] = {100, 25};
	arr[5] = {100, 76};
	arr[6] = {1000, 376};
	arr[7] = {1000, 625};
	arr[8] = {10000, 9376};
	arr[9] = {100000, 90625};
	arr[10] = {1000000, 109376};
	arr[11] = {1000000, 890625};
	arr[12] = {10000000, 2890625};	
	arr[13] = {10000000, 7109376};
	arr[14] = {100000000, 12890625};
	arr[15] = {100000000, 87109376};
	arr[16] = {1000000000, 212890625};
	arr[17] = {1000000000, 787109376};
}

void Solve(ll bil){
	for (int i = 1 ; i <= 17 ; i++) {
		ll tmp = arr[i].fi * bil + arr[i].se;
		ll batas = (ll)sqrt(tmp) - arr[i].se;
		batas /= arr[i].fi;
		for (ll j = 1; j <= batas+1; j++) {
			ll satu = arr[i].fi * j + arr[i].se;
			if (tmp % satu == 0) {
				ll dua = tmp/satu;
				if (dua % arr[i].fi == arr[i].se) {
					dua = (dua - arr[i].se)/arr[i].fi;
					if (j <= dua) {
						cout << "YA\n" ;
						cout << j << " " << dua << " " << arr[i].se << '\n';
						exit(0);
					}
				}
			}
		}
	}
	cout << "TIDAK\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> N;
	Solve(N);
	return 0;
}