#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int INF = (int)1e9;

int dist[183][183];
int n, m, t;
char pet[183][183];
queue<pair<int,int> > antrian;

bool cek(int x,int y){
	return (x >= 0 && x < n && y >= 0 && y < m && pet[x][y] == '0');
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < m; j++) {
				cin >> pet[i][j];
				if (pet[i][j] == '0') dist[i][j] = INF;
				else dist[i][j] = 0;
			}
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0; j < m ; j++) {
				if (pet[i][j] == '1') {
					antrian.push({i,j});
					while (!antrian.empty()) {
						pair<int,int> now = antrian.front();
						antrian.pop();
						if (cek(now.fi-1,now.se)) {
							if (dist[now.fi][now.se] + 1 < dist[now.fi-1][now.se]) {
								dist[now.fi-1][now.se] = dist[now.fi][now.se] + 1;
								antrian.push({now.fi-1, now.se});
							}
						} 
						if (cek(now.fi + 1, now.se)) {
							if (dist[now.fi][now.se] + 1 < dist[now.fi+1][now.se]) {
								dist[now.fi+1][now.se] = dist[now.fi][now.se] + 1;
								antrian.push({now.fi+1, now.se});
							}
						}
						if (cek(now.fi, now.se-1)) {
							if (dist[now.fi][now.se] + 1 < dist[now.fi][now.se-1]) {
								dist[now.fi][now.se-1] = dist[now.fi][now.se] + 1;
								antrian.push({now.fi, now.se-1});
							}
						}
						if (cek(now.fi, now.se+1)) {
							if (dist[now.fi][now.se] + 1 < dist[now.fi][now.se+1]) {
								dist[now.fi][now.se+1] = dist[now.fi][now.se] + 1;
								antrian.push({now.fi, now.se+1});
							}
						}
					}
				}
			} 
		}
		for (int i = 0 ; i < n ; i++)
				for (int j = 0 ; j < m ; j++) {
					cout << dist[i][j];
					cout << (j == m-1 ? '\n' : ' ');
				}
	}
	return 0;
}