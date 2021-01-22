#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,p,q;
ll i,j;
ll berat[105],warna[105],daya[105];
string s;
int nomor_soal;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> nomor_soal;
	cin >> n >> p >> q;
	for (i = 0 ; i < n ; i++){
		cin >> berat[i] >> daya[i] >> warna[i];
	}
	if (nomor_soal==1 || nomor_soal==2 || nomor_soal==3 || nomor_soal==0) {
		ll ans = -1;
		for (i = 0 ; i < (1<<n); i++){
			ll pilih[105];
			ll beda = 0;
			ll sum_berat = 0;
			ll tot = 0;
			memset(pilih,0,sizeof pilih);
			for (j = 0 ; j < n ; j++) {
				if ((i&(1<<j)) > 0) {
					pilih[warna[j]]++;
					if (pilih[warna[j]]==1) beda++;  
					sum_berat += berat[j];
					tot += daya[j];
				}
			}
			if (beda >= q && sum_berat <= p){
				ans = max(ans,tot);
			}
		}
		cout << ans << '\n';
	}
	else {
		
	}
	return 0;
}