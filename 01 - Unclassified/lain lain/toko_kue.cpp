#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const int N = 100000;

int n,i,j;
int arr[N + 5];
vector<int> bil[6];

int cari(int x){
	int sisa = x%5;
	if (sisa <= 2) return x - sisa;
	else return x + (5-sisa);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
		bil[arr[i]%5].pb(arr[i]);
	}
	int tiga = bil[3].size(); //banyak nya bilangan modulo 5 = 3
	int empat = bil[4].size();	//banyak nya bilangan modulo 5 = 4
	int ans = 0;
	//cout << tiga <<  " "<<empat << '\n';
	if (tiga < empat){
		for (i = 0 ; i < tiga; i++) {
			ans += cari(bil[3][i] + bil[4][i]); 
		}
		int tt = 0;
		for (i = tiga; i < empat; i++) {
			tt += bil[4][i];
			if (tt%5 <= 2) {
				ans += cari(tt);
				tt = 0;
			}
		}
		ans += cari(tt);
		for (i = 0 ; i < n ; i++) {
			if (arr[i]%5 <= 2) ans += cari(arr[i]);
		}
	}

	else if (empat <= tiga) {
		i = 0;
		for (i = 0 ; i < empat; i++) {
	//		cout << bil[3][i] << " " << bil[4][i] << '\n';
			ans += cari(bil[3][i] + bil[4][i]);
		}
	//	cout << ans << '\n';
		int tt = 0;
		for (i = empat; i < tiga; i++) {
			tt += bil[3][i];
			if (tt%5 <= 2) {
				ans += cari(tt);
				tt = 0;
			}
		}
		ans += cari(tt);
		for (i = 0 ; i < n ; i++) {
			if (arr[i]%5 <= 2) ans += cari(arr[i]);
		}
	}
	cout << ans << '\n';
	return 0;
}