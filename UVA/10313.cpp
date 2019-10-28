#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,idx,sz;
ll arr[10];
ll memo[1005][1005];
string s;
int _last;

ll ubah(string s){
	stringstream ss(s);
	ll res;
	return ss >> res ? res : 0;
}

ll cari(ll jumlah,ll banyak){
	if (jumlah == 0 && banyak == 0) return 1;
	if (banyak == 0) return 0;
	if (memo[jumlah][banyak]!= -1) return memo[jumlah][banyak];
	ll res = 0;
	ll tmp = _last;
	for (ll z = _last ; z <= min(jumlah,(ll)300) ; z++) {
		_last = z;
		res += cari(jumlah - z , banyak - 1);	
	}	
	return memo[jumlah][banyak] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s) {
		int awal = 0;
		int spasi = s.find(' ', 0);
		i = 0;
		string temp;
		while (spasi < s.size()) {
			temp = s.substr(awal, spasi-1-awal+1);
			arr[i] = ubah(temp);
			i++;
			awal = spasi + 1;
			spasi = s.find(' ', spasi + 1);
		}
		temp = s.substr(awal, (int)s.size()-1-awal+1);
		arr[i] = ubah(temp);
		i++;
		sz = i;
		memset(memo, -1, sizeof memo);
		_last = 1;
		cout << cari(6, 3) << '\n';
	}
	return 0;
}
