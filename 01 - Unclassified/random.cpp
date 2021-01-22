#include <bits/stdc++.h>
using namespace std;

int r, c;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
char arr[105][105];
int cnt[2];

void DFS(int x, int y){
	arr[x][y] = '.';
	for (int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < r && ny >= 0 && ny < c){
			if (arr[nx][ny] == 'o')
				DFS(nx, ny);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> r >> c;
	for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> arr[i][j];
	for (int i = 0; i < r; i++){
		for (int j = 0; j <c ;j++){
			if (arr[i][j] == 'o'){
				int z = 0;
				for (int k = 0; k < 4; k++){
					int x = i + dx[k];
					int y = j + dy[k];
					if (x >= 0 && x < r && y >= 0 && y < c){
						if (arr[x][y] == 'o') z++;
					}
				}
				if (z == 0) cnt[1]++;
				else cnt[z%2]++;
			}
		}
	}
	if (cnt[1] == 2 || cnt[1] == 0) {
		int ada = 0;
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				if (arr[i][j] == 'o'){
					ada++;
					DFS(i, j);
				}
			}
		}
		if (ada == 1) cout << "Yeayy bisa!! :D\n";
		else cout <<  "Tidak bisa :(\n";
	}
	else cout << "Tidak bisa :(\n";	
	return 0;
}