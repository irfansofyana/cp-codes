#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,m,i,j;
string s;
int frek[300005][28];
ll tot[30];

ll f(string s){
	bool tmp[26];
	memset(tmp, false, sizeof tmp);
	for (int z = 0 ; z < s.size(); z++) {
		tmp[s[z]-'a'] = true;
	}
	ll ret = 0;
	for (int z = 0 ; z < 26; z++) {
		if (tmp[z]) ret++;
	}
	return ret;
}

ll cek(ll x,ll y){
	if (x == 0) {
		ll ret = 0;
		for (int z = 0 ; z < 26 ; z++) {
			if (frek[y][z] > 0) ret++;
		}
		return ret;
	}
	else {
		ll ret = 0;
		for (int z = 0 ; z < 26 ; z++) {
			if (frek[y][z] - frek[x-1][z] > 0) ret++;
		}
		return ret;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	ll sz = (ll)s.size();
	for (i = 0 ; i < sz; i++) {
		if (i == 0) {
			frek[i][s[i]-'a']++;
		}
		else {
			for (j = 0 ; j < 26 ; j++) {
				frek[i][j] = frek[i-1][j];
			}
			frek[i][s[i]-'a']++;
		}
	}
	ll ans = f(s);
	cout << ans << '\n';
	for (i = 0 ; i < sz; i++) {
		for (j = 1; j <= ans; j++) {
			ll awal = i;
			ll akhir = sz-1;
			ll batas_bawah = awal;

			if (cek(i,sz-1) < j) break;

			while (awal <= akhir) {
				ll mid = (awal + akhir)/2;
				if (cek(i,mid) >= j) {
					batas_bawah = mid;
					akhir = mid - 1;
				}
				else if (cek(i,mid) < j) awal = mid + 1;
			}
			awal = i;
			akhir = sz-1;
			ll batas_atas = akhir;
			while (awal <= akhir) {
				ll mid = (awal + akhir)/2;
				if (cek(i,mid) <= j) {
					batas_atas = mid;
					awal = mid + 1;
				}
				else if (cek(i,mid) > j) akhir = mid - 1;
			}
			tot[j] += (batas_atas - batas_bawah + 1);
			//cout << i << " " << j << " " << batas_atas - batas_bawah + 1 << '\n';
		}
	}
	for (i  = 1 ; i <= ans; i++) {
		cout << tot[i] << '\n';
	}
	return 0;
}