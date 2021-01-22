#include <bits/stdc++.h>

using namespace std;

const int INF = (int)1e9;

int T, N, M;
int dist[105][105];
int ans1, ans2;
bool cek;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> N >> M;
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				dist[i][j] = INF;
		for (int i = 0 ; i < M; i++) {
			int x,y,tmp;
			cin >> x >> y >> tmp;
			dist[x][y] = tmp;
			dist[y][x] = tmp;
		}
		for (int k = 1; k <= N; k++) 
			for (int i = 1; i <= N; i++) 
				for (int j = 1; j <= N; j++) 
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++)
				cout << dist[i][j] << " ";
			cout << '\n';
		}
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++) {
				if (i == 1 && j == 1) {
					ans1 = dist[i][j];
					ans2 = dist[i][j];
					cek = true;
				}
				else {
					if (cek) {
						cek = false;
						if (dist[i][j] > ans2) ans2 = dist[i][j];
						else ans1 = dist[i][j];
 					}
 					else {
 						if (dist[i][j] < ans1) {
 							ans2 = ans1;
 							ans1 = dist[i][j];
 						} 
 						else if (dist[i][j] < ans2) {
 							ans2 = dist[i][j];
 						}
 					}
				}
			}
		cout << ans1 << " " << ans2 << '\n';
	}
	return 0;
}