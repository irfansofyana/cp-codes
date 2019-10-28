#include <bits/stdc++.h>
#define OPTIMASI
#define fi first
#define se second
using namespace std;

int n,m,i,j,ans;
string s;
char arr[105][105];
int idx,idy;
pair<int,int> tambah;

bool cek(int x,int y){
	return (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '#');
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	int dummy;
	while (cin >> n >> m >> dummy) {
		if (n == 0 && m == 0 && dummy == 0) return 0;
		for (i = 0 ; i < n ; i++) 
			for (j = 0 ; j < m ; j++){
				cin >> arr[i][j];
				if (arr[i][j] == 'N' || arr[i][j] == 'S' || arr[i][j] == 'L' || arr[i][j] == 'O') {
					idx = i; idy = j;
					if (arr[i][j] == 'N') tambah = {-1,0};
					if (arr[i][j] == 'S') tambah = {1,0};
					if (arr[i][j] == 'L') tambah = {0,1};
					if (arr[i][j] == 'O') tambah = {0,-1};
				}
			}
		cin >> s;
		ans = 0;
		for (i = 0 ; i < s.size(); i++){
			if (s[i] == 'F') {
				if (cek(idx + tambah.fi,idy + tambah.se)) {
					if (arr[idx + tambah.fi][idy + tambah.se] == '*') {
						ans++;
						arr[idx + tambah.fi][idy + tambah.se] = '.';
					}
					idx += tambah.fi;
					idy += tambah.se;
				}
			}
			else if (s[i] == 'D') {
				if (tambah.fi == -1 && tambah.se == 0 ) tambah = {0,1};
				else if (tambah.fi == 1 && tambah.se == 0 ) tambah = {0,-1};
				else if (tambah.fi == 0 && tambah.se == 1 ) tambah = {1,0};
				else if (tambah.fi == 0 && tambah.se == -1) tambah = {-1,0};
			}
			else if (s[i] == 'E') {
				if (tambah.fi == -1 && tambah.se == 0 )tambah = {0,-1};
				else if (tambah.fi == 1 && tambah.se == 0 ) tambah = {0,1};
				else if (tambah.fi == 0 && tambah.se == 1 ) tambah = {-1,0};
				else if (tambah.fi == 0 && tambah.se == -1) tambah = {1,0};
			}
		}
		cout << ans << '\n';
	}
}