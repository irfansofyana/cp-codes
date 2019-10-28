#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int arr[60][60];
int baris[60],kolom[60];
int dp_baris[60],dp_kolom[60];
int tot,maks;
int ans ;
int anak[3];

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n >> m;
	for (i = 1 ; i <= n; i++){
		for (j = 1 ; j <= m; j++){
			cin >> arr[i][j];
			tot += arr[i][j];
		}
	}
	for (i = 1 ; i <= m ; i++) {
		for (j = 1 ; j <= n ; j++) {
			kolom[i] += arr[j][i];
		}
	}
	for (i = 1 ; i <= n ; i++) {
		for (j = 1 ; j <= m ; j++){
			baris[i] += arr[i][j];
		}
	}
	
	dp_kolom[0] = 0;
	for (i = 1 ; i <= m ; i++)
		dp_kolom[i] = dp_kolom[i-1] + kolom[i];
	dp_baris[0] = 0;
	for (i = 1 ; i <= n ; i++)
		dp_baris[i] = dp_baris[i-1] + baris[i];
	cin >> anak[0] >> anak[1] >> anak[2];
	sort(anak,anak+3);
	for (i = 1 ; i <= m-2 ; i++) {
		for (j = i+1 ; j <= m-1; j++) {
			int luas[3];
			luas[0] = dp_kolom[i];
			luas[1] = dp_kolom[j]-dp_kolom[i];
			luas[2] = tot - (luas[0]+luas[1]);
			sort(luas,luas+3);
			bool cek = true;
			for (int z = 0 ; z < 3 ; z++) 
				if (luas[z]!=anak[z]) {
					cek = false;
					break;
				}
			if (cek) ans++;
		}
	}
	for (i = 1 ; i <= n-2 ; i++) {
		for (j = i+1 ; j <= n-1 ; j++) {
			int luas[3];
			luas[0] = dp_baris[i];
			luas[1] = dp_baris[j]-dp_baris[i];
			luas[2] = tot - (luas[0]+luas[1]);
			sort(luas,luas+3);
			bool cek = true;
			for (int z = 0 ; z < 3 ; z++) 
				if (luas[z]!=anak[z]) {
					cek = false;
					break;
				}
			if (cek) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}