#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;


int n;
int parent[1005];
int nomor[1005][1005];

int cari(int x){
	return (x == parent[x] ? x : parent[x] = cari(parent[x]));
} 

void gabung(int x,int y){
	int a = cari(x);
	int b = cari(y);
	parent[a] = b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int x,y;
		cin >> x >> y;
		nomor[x][y] = i+1;
	}
	for (int i = 1; i <= n ; i++) parent[i] = i;
	for (int i = 1; i <= 1000 ; i++) {
		bool pertama = true;
		int acuan = 0;
		for (int j = 1; j <= 1000; j++) {
			if (nomor[i][j] != 0) {
				if (pertama) {
					pertama = false;
					acuan = nomor[i][j];
				} 
				else gabung(acuan, nomor[i][j]);
			}
		}
		pertama = true;
		acuan = 0;
		for (int j = 1; j <= 1000; j++) {
			if (nomor[j][i] != 0) {
				if (pertama) {
					pertama = false;
					acuan = nomor[j][i];
				}
				else gabung(acuan, nomor[j][i]);
			}
		}
	}
	int ans = 0;
	bool used[1005];
	memset(used, false, sizeof used);
	for (int i = 1; i <= n ; i++) {
		int tmp = cari(i);
		if (!used[tmp]) {
			ans++;
			used[tmp] = true;
		}
	}
	cout << ans-1 << '\n';
	return 0;
}