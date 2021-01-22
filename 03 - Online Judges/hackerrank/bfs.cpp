#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,q,i,j;
int dist[1005];
queue<int> antrian;
//vector<int> arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> q;
	while (q--) {
		cin >> n >> m;	
		vector<int> arr[1005];
		for (i = 0 ; i < m ; i++) {
			int x,y;
			cin >> x >> y;
			arr[x].pb(y);
			arr[y].pb(x);
		}
		int awal;
		cin >> awal;
		for (i = 1 ; i <= n ; i++) {
			dist[i] = INT_MAX;
		}
		antrian.push(awal);
		dist[awal] = 0;
		while (!antrian.empty()){
			int noww = antrian.front();
			antrian.pop();
			for (int z = 0 ; z < arr[noww].size(); z++) {
				if (dist[noww] + 6 < dist[arr[noww][z]]) {
					dist[arr[noww][z]] = dist[noww] + 6;
					antrian.push(arr[noww][z]);
				}
			}
		}
		for (i = 1 ; i <= n ; i++) {
			if (i != awal) {
				cout << (dist[i] == INT_MAX ? -1 : dist[i]) ;
				if (i == n) cout << '\n';
				else if (i == n-1 && awal == n) {
					cout << '\n';
				}
				else cout << " ";
			}
		}
	}
	return 0;
}