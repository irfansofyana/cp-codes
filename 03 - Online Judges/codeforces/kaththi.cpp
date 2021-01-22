#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef pair<int,int> ii;

int T, R, C;
char arr[1005][1005];
int dist[1005][1005];
int dx[] = {-1,0,0,1};
int dy[] = {0,-1,1,0};

bool cek(int x,int y){
	return (x >= 0 && x < R && y >= 0 && y < C);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> R >> C;
		for (int i = 0 ; i < R; i++)
			for (int j = 0 ; j < C; j++){
				cin >> arr[i][j];
				dist[i][j] = (int)1e9;
			}
		dist[0][0] = 0;
		deque <ii> pq;
		pq.push_back({0,0});
		while (!pq.empty()) {
			int nodex = pq.front().fi;
			int nodey = pq.front().se;
			pq.pop_front();
			for (int i = 0; i < 4; i++) {
				if (cek(nodex + dx[i], nodey + dy[i])) {
					if (arr[nodex + dx[i]][nodey + dy[i]] == arr[nodex][nodey]) {
						if (dist[nodex][nodey] < dist[nodex + dx[i]][nodey + dy[i]]) {
							dist[nodex + dx[i]][nodey + dy[i]] = dist[nodex][nodey];
							pq.push_front({nodex + dx[i], nodey + dy[i]});
						}
					}
					else {
						if (dist[nodex][nodey] + 1 < dist[nodex + dx[i]][nodey + dy[i]]) {
							dist[nodex + dx[i]][nodey + dy[i]] = dist[nodex][nodey] + 1;
							pq.push_back({nodex + dx[i], nodey + dy[i]});
						}
					}
				}
			}
		}
		cout << dist[R-1][C-1] << '\n';
	}
	return 0;	
}