#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
ll nomor_soal,n,p,q;
ll i,j;
ll ber[105],daya[105],warna[105];
ll dp[105][105][105];
ll pilih[105];

ll cari(ll idx,ll berat,ll udah){
	if (dp[idx][berat][udah]!=-1) return dp[idx][berat][udah];
	if (idx == n && udah == 0) return 0;
	if (idx == n) return -1*(ll)1e+10;
	// terlalu berat , skip : 
	if (ber[idx] > berat) return dp[idx][berat][udah] = cari(idx+1,berat,udah);
	if (udah == 0) {
		ll ambil ;
		// kita ambil :
		pilih[warna[idx]]++;
		ambil = cari(idx+1,berat-ber[idx],udah) + daya[idx];
		//pilih[warna[idx]]--;
		// kita gak ambil : 
		ll gak_ambil;
		gak_ambil = cari(idx+1,berat,udah);
		return dp[idx][berat][udah] = max(ambil,gak_ambil);
	}
	//Kalo kita pilih :
	ll ambil;
	bool cek = false;
	if (pilih[warna[idx]]==0) {
		pilih[warna[idx]]++;
		cek = true;
		ambil = cari(idx+1,berat-ber[idx],udah-1) + daya[idx];
		//pilih[warna[idx]]--;
	}
	if (!cek){
		ambil = cari(idx+1,berat-ber[idx],udah) + daya[idx];
	}
	//Kalo kita gak pilih :
	ll gak_ambil = cari(idx+1,berat,udah);
	return dp[idx][berat][udah] = max(ambil,gak_ambil);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> nomor_soal;
	cin >> n >> p >> q;
	for (i = 0 ; i < n ; i++) {
		cin >> ber[i] >> daya[i] >> warna[i];
	}
	memset(dp,-1,sizeof dp);
	memset(pilih,0,sizeof pilih);
	cout << max(cari(0,p,q),(ll)-1) << '\n';
	return 0;
}