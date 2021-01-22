#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,t,awal,akhir;
int dist[505], ntol[505];
vector<int> arr[505];
bool tol[505][505];
int x,y,i,j;
queue<int> antrian;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> t >> awal >> akhir;
	for (i = 0 ; i < m ; i++) {
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
	}
	for (i = 0 ; i < t; i++) {
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
		tol[x][y] = true;
		tol[y][x] = true;
	}
	for (i = 0 ; i <= n ; i++) {
		dist[i] = INT_MAX;
		ntol[i] = INT_MAX;
	}
	antrian.push(awal);
	dist[awal] = 0; ntol[awal] = 0;
	while (!antrian.empty()){
		int kota = antrian.front();
		antrian.pop();
		for (int z = 0 ; z < arr[kota].size(); z++) {
			int next_kota = arr[kota][z];
			if (ntol[kota] == 1 && tol[kota][next_kota]) continue;
			else if (ntol[kota] == 1 && dist[kota] + 1 < dist[next_kota]) {
				dist[next_kota] = dist[kota] + 1;
				ntol[next_kota] = 1;
				antrian.push(next_kota);
			}
			else if (ntol[kota] == 0 && tol[kota][next_kota]) {
				if (dist[kota] + 1 <= dist[next_kota]) {
					dist[next_kota] = dist[kota] + 1;
					ntol[next_kota] = 1;
					antrian.push(next_kota);
				}
			}
			else if (ntol[kota] == 0 && dist[kota] + 1 < dist[next_kota]) {
				dist[next_kota] = dist[kota] + 1;
				ntol[next_kota] = 0;
				antrian.push(next_kota);
			}
			else if (ntol[kota] == 0 && dist[kota] + 1 == dist[next_kota] && ntol[next_kota] > ntol[kota]) {
				ntol[next_kota] = ntol[kota];
				antrian.push(next_kota); 
			}		
		}
	}
	cout << dist[akhir] << '\n';
	return 0;
}