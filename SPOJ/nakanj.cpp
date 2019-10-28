#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t;
char asal1,tujuan1;
int asal2, tujuan2,i;
queue<int> antrian;
int dist[70];

int ubah(char asal1,int asal2){
	int tot = 0;
	for (int z = 0 ; z < (int)asal1-(int)'a'; z++) 
		tot += 8;
	tot += asal2;
	return tot;
}

pair<char,int> ganti(int nilai){
	if (nilai%8 == 0) {
		return {'a' + ((nilai)/8) - 1, 8};
	}
	else {
		return {'a' + (nilai/8), nilai%8};
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cout << ubah('b',2) << '\n';
	cin >> t;
	while (t--) {
		cin >> asal1 >> asal2 >> tujuan1 >> tujuan2;
		for (i = 1; i <= 64 ; i++) dist[i] = (int)1e7;
		int asal = ubah(asal1,asal2);
		int tujuan = ubah(tujuan1,tujuan2);
		dist[asal] = 0;
		antrian.push(asal);
		while (!antrian.empty()) {
			int now = antrian.front();
			antrian.pop();
			pair<char,int> sekarang = ganti(now);
			int tmp;
			if (sekarang.fi-2 >= 'a' && sekarang.se-1 >= 1){
				tmp = ubah(sekarang.fi - 2, sekarang.se-1);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
			if (sekarang.fi - 2 >= 'a' && sekarang.se + 1 <= 8) {
				tmp = ubah(sekarang.fi-2,sekarang.se+1);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			} 
			if (sekarang.fi - 1 >= 'a' && sekarang.se - 2 >= 1) {
				tmp = ubah(sekarang.fi-1,sekarang.se-2);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
			if (sekarang.fi - 1 >= 'a' && sekarang.se + 2 <= 8) {
				tmp = ubah(sekarang.fi-1, sekarang.se + 2);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
			if (sekarang.fi + 1 <= 'h' && sekarang.se + 2 <= 8) {
				tmp = ubah(sekarang.fi + 1, sekarang.se + 2);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
			if (sekarang.fi + 1 <= 'h' && sekarang.se  - 2 >= 1) {
				tmp = ubah(sekarang.fi + 1,sekarang.se -2 );
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
			if (sekarang.fi + 2 <= 'h' && sekarang.se - 1 >= 1) {
				tmp = ubah(sekarang.fi + 2, sekarang.se - 1);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
			if (sekarang.fi + 2 <= 'h' && sekarang.se + 1 <= 8) {
				tmp = ubah(sekarang.fi + 2, sekarang.se + 1);
				if (dist[now] + 1 < dist[tmp]) {
					dist[tmp] = dist[now] + 1;
					antrian.push(tmp);
				}
			}
		}
		cout << dist[tujuan] << '\n';	
	}
	return 0;
}