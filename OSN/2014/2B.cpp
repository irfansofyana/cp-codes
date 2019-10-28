#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int r, c;
int counter;
int sx, sy, tx, ty;
string dummy;

struct paket{
	char ch;
	int number;
};

paket arr[1005][1005];
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
int dist[1000005];
vector<vector<int> > adj;

bool cek(int x,int y){
	return (x >= 0 && x < r && y >= 0 && y < c);
}

bool canMove(int x,int y){
	return (arr[x][y].ch == '#' || arr[x][y].ch == 'T' || arr[x][y].ch == 'S');
}

void DFS(int x,int y){
	arr[x][y].number = counter;
	for (int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (cek(nx, ny) && arr[nx][ny].number == -1 && canMove(nx, ny)){
			DFS(nx, ny);
		}
	}
}

void fillAdj(){
	for (int i = 0; i < counter+1; i++) {
		vector<int> tmp;
		adj.emplace_back(tmp);
	}
	for (int i = 0; i < r; i++){
		int j = 0;
		int curr = -1;
		while (j < c){
			if (arr[i][j].number == -1) j++;
			else {
				if (curr == -1){
					curr = arr[i][j].number;
					j++;
				}else if (curr != arr[i][j].number){
					adj[curr].emplace_back(arr[i][j].number);
					adj[arr[i][j].number].emplace_back(curr);
					curr = arr[i][j].number;
					j++;
				}else j++;
			}
		}
	}
	for (int i = 0; i < c; i++){
		int j = 0;
		int curr = -1;
		while (j < r){
			if (arr[j][i].number == -1) j++;
			else {
				if (curr == -1){
					curr = arr[j][i].number;
					j++;
				}else if (curr != arr[j][i].number){
					adj[curr].emplace_back(arr[j][i].number);
					adj[arr[j][i].number].emplace_back(curr);
					curr = arr[j][i].number;
					j++;
				}else j++;
			}
		}
	}
}

void Solve(){
	fillAdj();
	if ((tx == -1 && ty == -1) || (sx == -1 && sy == -1)) {
		cout << -1 << '\n';
		exit(0);
	}
	queue<int> antrian;
	int start = arr[sx][sy].number;
	int end = arr[tx][ty].number;
	for (int i = 1; i <= counter-1; i++) dist[i] = INF;
	dist[start] = 0;
	antrian.push(start);
	while (!antrian.empty()){
		int now = antrian.front(); antrian.pop();
		for (int i = 0 ; i < adj[now].size(); i++){
			int nxt = adj[now][i];
			if (dist[now] + 1 < dist[nxt]){
				dist[nxt] = dist[now] + 1;
				antrian.push(nxt);
			}
		}
	}
	cout << (dist[end] == INF ? -1 : dist[end]) << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy >> r >> c;
	sx = -1; sy = -1; tx = -1; ty = -1;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++){
			cin >> arr[i][j].ch;
			arr[i][j].number = -1;
			if (arr[i][j].ch == 'S'){
				sx = i; sy = j;
			}else if (arr[i][j].ch == 'T'){
				tx = i; ty = j;
			}
		}
	counter = 1;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			char t = arr[i][j].ch;
			if (canMove(i, j) && arr[i][j].number == -1){
				DFS(i, j);
				counter++;
			}
		}
	}
	Solve();
	return 0;
}