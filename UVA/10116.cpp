#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef pair<int,int> ii;

int n,m,i,j,hadap,k,now;
ii pos;
char arr[25][25];
int berapa[25][25];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool valid(int x,int y){
	return (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '.');
}

int cari(char x){
	if (x == 'N') return 0;
	else if (x == 'E') return 1;
	else if (x == 'S') return 2;
	else return 3;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m >> k) {
		if (n == 0 && m == 0 && k == 0) return 0;
		memset(berapa,0,sizeof berapa);
		for (i = 0 ; i < n ; i++) 
			for (j = 0 ; j < m ; j++)
				cin >> arr[i][j];
		k--;
		pos = {0,k};
		now = 0;
		hadap = cari(arr[0][k]);
		bool ans = false;
		while (valid(pos.fi,pos.se)){
			arr[pos.fi][pos.se] = '.';
			berapa[pos.fi][pos.se] = now;	//old
			pos.fi += dx[hadap];	//new
			pos.se += dy[hadap];
			if (!valid(pos.fi,pos.se)){
				if (pos.fi >= 0 && pos.fi < n && pos.se >= 0 & pos.se < m) {
					cout << berapa[pos.fi][pos.se] << " step(s) before a loop of " << now + 1 - berapa[pos.fi][pos.se] << " step(s)\n";
				}
				else {
					cout << now + 1 << " step(s) to exit\n";
					//break;
				}
				break;
			}
			hadap = cari(arr[pos.fi][pos.se]);
			now++;
		}
	}
	return 0;
}