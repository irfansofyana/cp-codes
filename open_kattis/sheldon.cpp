#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long LL;

LL x, y;

bool bisa(LL panjang, LL a, LL b){
	if (panjang%(a+b) == 0) return true;
	else {
		if (panjang%(a+b) == a) return true;
		else return false;
	}
}

LL cari(LL x){
	vector<LL> bit;
	LL ans = 0;
	for (LL i = 0; i < 63; i++){
		if ((1LL<<i) > x) break;
		if ((x&(1LL<<i)) > 0) bit.pb(1);
		else bit.pb(0);
	}
	reverse(bit.begin(), bit.end());
	for (LL i = 0; i < bit.size(); i++){
		LL banyak = (LL)bit.size()-i;
		for (LL j = 1; j <= banyak; j++){
			for (LL k = 0; k <= banyak; k++){
				if (j + k > banyak) break;
				if (i > 0){
					if (k == 0 && j > 1) continue;
					else if (bisa(banyak, j, k)) {
						ans++;
					}
					continue;
				}
				if (k == 0 && j > 1) continue;
				LL satu = j;
				LL nol = k;
				LL cnt = 0;
				LL now = 1;
				LL posisi = i;
				bool can = true;
				bool flag = false;
				while (posisi < bit.size() && can){
					if (now == 1){
						if (bit[posisi] == 0 && !flag){
							can = false;
							break;
						}
						posisi++;
						cnt++;
					}else if (now == 0){
						if (bit[posisi] == 1 && !flag){
							flag = true;
						}
						posisi++;
						cnt++;
					}
					if (cnt == satu && now == 1){
						if (nol > 0){
							cnt = 0;
							now = 0;
						}else cnt = 0;
					}else if (cnt == nol && now == 0){
						cnt = 0;
						now = 1;
					}
				}
				if (can){
					if (cnt == 0 && now == 0) {
						ans++;
					}
					else if (cnt == 0 && now == 1) {
						ans++;
					}
				}
			}
		}
	}
	return ans;
}

int main(){
	scanf("%lld %lld", &x, &y);
	printf("%lld\n", cari(y) - cari(x-1));
	return 0;
}