#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[1000005];
ll sum[31270];
ll t,n,m,i,j,cari;
ll bawah,_low,_lastbil;

void precompute(){
	arr[1] = 1;
	for (i = 2 ; i <= 1000000 ; i++) {
		ll x = 0;
		j = i;
		while (j > 0) {
			x++;
			j /= 10;
		}
		arr[i] = arr[i-1] + x;	//arr[i] banyak digit kelompok ke i
	}
	sum[1] = arr[1];
	for (i = 2; i <= 31268 ; i++) {
		sum[i] = sum[i-1] + arr[i];	// jumlahan banyak digit kelompok 1 - i
	}
}

ll binser(ll awal,ll akhir){
	ll mid = (awal+akhir)/2;
	if (awal > akhir) return bawah;
	else if (sum[mid] > n) return binser(awal,mid-1);
	else if (sum[mid] <= n) {
		bawah = mid;
		return binser(mid+1,akhir);
	}
}

ll binserr(ll awal, ll akhir) {
	ll mid = (awal + akhir)/2;
	if (awal > akhir) return _lastbil;
	else if (arr[mid] > cari) return binserr(awal,mid-1);
	else if (arr[mid] <= cari) {
		_lastbil = mid;
		return binserr(mid+1,akhir);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	precompute();
	cin >> t;
	while (t--) {
		cin >> n;
		bawah = 0;
		_low = binser(1,31268) + 1;
		cari = n-(sum[_low-1]);
		//cout << _low << " " << cari << '\n';
		if (cari==0) {
			cout << (_low-1)%10 << '\n';
		}
		else {
			_lastbil = 0;
			ll _last = binserr(1,_low);
			cari -= arr[_last];
		//	cout << _last << " " << cari << '\n';		
			if (cari==0) {
				cout << _last%10 << '\n';
			}
			else {
				j = _last + 1;
				vector<int> temp;
				while (j > 0) {
					temp.push_back(j%10);
					j /= 10;
				}
				for (i = (int)temp.size()-1 ; i >= 0 ; i--){
					cari--;
					if (cari==0) {
						cout << temp[i] << '\n';
						break;
					}
				}
			}
		}
	}
	return 0;
}