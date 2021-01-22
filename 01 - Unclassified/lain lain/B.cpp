#include <bits/stdc++.h>
#define fi first
#define se second
#define pb pushback
using namespace std;

int n,m,i,j;
int ans;
char arr[20][105];
int posx,posy;
int banyak[20];
int tot[20];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = n ; i >= 1; i--) {
		int tot = 0;
		for (j = 1; j <= m+2; j++) {
			cin >> arr[i][j];
			if (j >= 2 && j <= m+1 && arr[i][j] == '1') tot++; 
		}
		banyak[i] = tot;
	}
	for (i = 1; i <= n ; i++) {
		tot[i] = tot[i-1] + banyak[i];
	}
	posx = 1; posy = 1;
	int tambah = 1;
	
	while (posx != n+1) {
		int tans = 0;
		int sudah = 0;

		if (banyak[posx] == 0 && (tot[n] - tot[posx] != 0)) {
			ans++;
			posx++;
			continue;
		}
		else if (banyak[posx] == 0 && (tot[n] - tot[posx] == 0)) break;
		//cout << ans << '\n';
		
		while (sudah != banyak[posx]) {
			tans++;
			if (arr[posx][posy] == '1') {
				//tans++;
				sudah++;
			}
			posy+=tambah;
		}
		if (tambah == 1) posy--; 
		else posy++;
		tans--;

		if (posx == n || tot[n] - tot[posx] == 0) {
			ans += tans;
			break;
		}
		
		int kekiri = posy - 1;
		int kekanan = m+2-posy;
		
		if (kekiri < kekanan) {
			tans += kekiri + 1;
			ans += tans;
			posy = 1;
			tambah = 1;
			posx++;
		}
		else {
			tans += kekanan + 1;
			ans += tans;
			posy = m+2;
			tambah = -1;
			posx++;
		} 

	}
	cout << ans << '\n';
	return 0;
}