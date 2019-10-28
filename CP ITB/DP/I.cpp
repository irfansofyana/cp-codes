/*	
	Problem 	: I. Tri Graphs
	created 	: 08-10-2017
	solution by	: cokguzel48 (Irfan Sofyana Putra)
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll NMAX = (ll)1e5;

ll n, arr[NMAX+5][4], dp[NMAX+5][4];
int tc;

ll cari(ll baris,ll kolom) {
	if (baris == n-1 && kolom == 1) return arr[baris][kolom];
	if (baris == n-1 && kolom == 0) return arr[baris][kolom] + cari(baris, kolom+1);
	if (baris == n-1) return (ll)1e12;
	if (dp[baris][kolom] != -1) return dp[baris][kolom];
	if (kolom == 0) {
		ll nilai1 = (ll)1e12;
		nilai1 = min(nilai1, cari(baris+1, kolom));
		nilai1 = min(nilai1, cari(baris+1, kolom+1));
		nilai1 = min(nilai1, cari(baris, kolom+1));
		return dp[baris][kolom] = nilai1 + arr[baris][kolom];
	}
	else if (kolom == 1) {
		ll nilai = (ll)1e12;
		nilai = min(nilai, cari(baris+1, kolom - 1));
		nilai = min(nilai, cari(baris+1, kolom));
		nilai = min(nilai, cari(baris+1, kolom+1));
		nilai = min(nilai, cari(baris, kolom+1));
		return dp[baris][kolom] = nilai + arr[baris][kolom];
	}
	else if (kolom == 2) {
		ll nilai2 = (ll)1e12;
		nilai2 = min(nilai2, cari(baris+1, kolom));
		nilai2 = min(nilai2, cari(baris+1, kolom-1));
		return dp[baris][kolom] = nilai2 + arr[baris][kolom];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		for (int i = 0 ; i < n ; i++) 
			for (int j = 0 ; j < 3; j++)
				cin >> arr[i][j];
		memset(dp, -1, sizeof dp);
		cout << ++tc << ". " <<  cari(0, 1) << '\n'; 
	}
	return 0;
}	