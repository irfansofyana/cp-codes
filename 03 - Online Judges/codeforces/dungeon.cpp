#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;


typedef pair<int,int> ii;

int L, R, C;
char arr[35][35][35];
int awal, awalx, awaly;
int akhir, akhirx, akhiry;
int dist[35][35][35];

queue <pair<int,ii> > antri;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> L >> R >> C){
		if (L == 0 && R == 0 && C == 0) return 0;
		for (int i = 0 ; i < L; i++) {
			for (int j = 0 ; j < R; j++)
				for (int k = 0 ; k < C; k++){
					cin >> arr[i][j][k];
					if (arr[i][j][k] == 'S') {
						awal = i; awalx = j; awaly = k;
					}
					else if (arr[i][j][k] == 'E'){
						arr[i][j][k] = '.';
						akhir = i; akhirx = j; akhiry = k;
					}
				}
			cin.ignore();
		}
	//	cout << awal << " " << awalx << " " << awaly << '\n';
	//	cout << akhir << " " << akhirx << " " << akhiry << '\n';
		antri.push({awal, {awalx, awaly}});
		for (int i = 0 ; i < L; i++)
			for (int j = 0 ; j < R; j++)
				for (int k = 0 ; k < C; k++)
					dist[i][j][k] = (int)1e9;
		dist[awal][awalx][awaly] = 0;
		while (!antri.empty()) {
			int nowLevel = antri.front().first;
			int nowX = antri.front().second.first;
			int nowY = antri.front().second.second;
			antri.pop();
			if (nowX - 1 >= 0 && arr[nowLevel][nowX-1][nowY] == '.') 
				if (dist[nowLevel][nowX][nowY] + 1 < dist[nowLevel][nowX-1][nowY]){
					dist[nowLevel][nowX-1][nowY] = dist[nowLevel][nowX][nowY] + 1;
					antri.push({nowLevel,{nowX-1, nowY}});
				}
		
			if (nowX + 1 < R && arr[nowLevel][nowX+1][nowY] == '.') 
				if (dist[nowLevel][nowX][nowY] + 1 < dist[nowLevel][nowX+1][nowY]){
					dist[nowLevel][nowX+1][nowY] = dist[nowLevel][nowX][nowY] + 1;
					antri.push({nowLevel,{nowX+1, nowY}});
				}
		
			if (nowY - 1 >= 0 && arr[nowLevel][nowX][nowY-1] == '.') 
				if (dist[nowLevel][nowX][nowY] + 1 < dist[nowLevel][nowX][nowY-1]) {
					dist[nowLevel][nowX][nowY-1] = dist[nowLevel][nowX][nowY] + 1;
					antri.push({nowLevel,{nowX, nowY-1}});
				}
		
			if (nowY + 1 < C && arr[nowLevel][nowX][nowY + 1] == '.') 
				if (dist[nowLevel][nowX][nowY] + 1 < dist[nowLevel][nowX][nowY + 1]) {
					dist[nowLevel][nowX][nowY + 1] = dist[nowLevel][nowX][nowY] + 1;
					antri.push({nowLevel,{nowX, nowY + 1}});
				}
		
			if (nowLevel - 1 >= 0 && arr[nowLevel-1][nowX][nowY] == '.') 
				if (dist[nowLevel][nowX][nowY] + 1 < dist[nowLevel-1][nowX][nowY]) {
					dist[nowLevel - 1][nowX][nowY] = dist[nowLevel][nowX][nowY] + 1;
					antri.push({nowLevel - 1,{nowX, nowY}});
				}
		
			if (nowLevel + 1 < L && arr[nowLevel + 1][nowX][nowY] == '.') 
				if (dist[nowLevel][nowX][nowY] + 1 < dist[nowLevel + 1][nowX][nowY]) {
					dist[nowLevel + 1][nowX][nowY] = dist[nowLevel][nowX][nowY] + 1;
					antri.push({nowLevel + 1,{nowX, nowY}});
				}
		} 	
		if (dist[akhir][akhirx][akhiry] == (int)1e9 ) cout << "Trapped!\n";
		else cout << "Escaped in " << dist[akhir][akhirx][akhiry] << " minute(s)." << '\n';
	}
	return 0;
}