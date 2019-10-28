#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


string dummy;
ll n,r,y,i,j,q;
vector<pair<ll,char> > gerakan;
ll sum[1000005];
ll frek;
bool pilih[25];
ll ambil[25];

void permutasi(ll udah) {
	int idx;
	if (udah==r) {
		ll nilai = 0;
		bool tambahan = false; 
		for (idx = 0 ; idx < r ; idx++) {
			ll cus = ambil[idx];
			ll prev = 0;
			if (idx >= 1) {
				prev = ambil[idx-1];
			}
			if (tambahan) nilai += y;
			if (idx > 0 && gerakan[prev].second=='P') nilai += 2*gerakan[cus].first;
			else if (idx > 0 && gerakan[prev].second=='L') nilai += (gerakan[cus].first)/2;
			else nilai += gerakan[cus].first;
			if (gerakan[cus].second=='Y') tambahan = true;
		}
		sum[nilai]++;
	}
	else {
		for (idx = 0 ; idx < n ; idx++) {
			if (!pilih[idx]) {
				pilih[idx] = true;
				ambil[udah] = idx;
				permutasi(udah+1);
				pilih[idx] = false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ns;
	cin >> dummy >> ns;
	
	cin >> n >> r >> y >> j;
	for (i = 0 ; i < n ; i++) {
		ll x; char ch;
		cin >> x >> ch;
		gerakan.push_back(make_pair(x,ch));
	}
	
	permutasi(0);
	
	for (i = 1 ; i <= 1000000 ; i++) sum[i] += sum[i-1];
	
	while (j--) {
		ll x;
		cin >> x;
		cout << sum[1000000]-sum[x] << '\n';
	}
	return 0;
}