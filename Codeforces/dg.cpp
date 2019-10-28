#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define INF 1000000000
using namespace std;

int N, L, T;
int awal, akhir;
bool tol[505][505];
vector<int> arr[505];
int dist[505][3];
queue<pair<int,int> > antrian;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> L >> T >> awal >> akhir;
	int k1,k2;
	for (int i = 0 ; i < L ; i++) {
		//int k1,k2;
		cin >> k1 >> k2;
		arr[k1].pb(k2);
		arr[k2].pb(k1);
	}
	for (int i = 0 ; i < T; i++) {
		cin >> k1 >> k2;
		arr[k1].pb(k2);
		arr[k2].pb(k1);
		tol[k1][k2] = true; tol[k2][k1] = true;
	}
	for (int i = 1 ; i <= N; i ++) {
		dist[i][0] = INF; dist[i][1] = INF;
	}
	/*cout << '\n';
	for (int i = 1; i <= N; i++) {
		for (int j = 0 ; j < arr[i].size(); j++) {
			cout << arr[i][j] << " ";
		}cout << '\n';
	}*/
	dist[awal][0] = 0; dist[awal][1] = 0;
	antrian.push({awal, 0});	//menggunakan 0 tol
	int TC =0;
	while (!antrian.empty()){
		pair<int,int> tmp = antrian.front();
		antrian.pop();
		int noww = tmp.fi;
		int pake = tmp.se;
		for (int i = 0 ; i < arr[noww].size(); i++) {
			int nextt = arr[noww][i];
			if (pake == 0) {
				if (tol[noww][nextt]) {
					if (dist[noww][0] + 1 < dist[nextt][1]) {
						dist[nextt][1] = dist[noww][0] + 1;
						antrian.push({nextt, 1});
					}
				}
				else {
					if (dist[noww][0] + 1 < dist[nextt][0]) {
						dist[nextt][0] = dist[noww][0] + 1;
						antrian.push({nextt, 0});
					}
				}
			}
			else {
				if (!tol[noww][nextt]) {
					if (dist[noww][1] + 1 < dist[nextt][1]) {
						dist[nextt][1] = dist[noww][1] + 1;
						antrian.push({nextt, 1});
					}
				}
			}
		}
	}
	/*cout << '\n';
	for (int i = 1; i <= N; i++) {
		if (i!= awal) cout << dist[i][0] << " " << dist[i][1] << '\n';
	}*/
	cout << min(dist[akhir][0], dist[akhir][1]) << '\n';
	return 0;
}