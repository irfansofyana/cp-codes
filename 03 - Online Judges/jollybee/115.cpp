#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j,m;
int tc;
char A[15][15];
vector<pair<int,int> > titik;
queue<pair<int,int> > pos;
int jarak[15][15];

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m && jarak[x][y]==-1 && A[x][y]!='#') return true;
	return false;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		titik.clear();
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++){
				cin >> A[i][j];
				if (A[i][j]=='H') titik.push_back(make_pair(i,j));
			}
		memset(jarak,-1,sizeof jarak);
		pos.push(make_pair(titik[0].first,titik[0].second));
		jarak[titik[0].first][titik[0].second] = 0;
		while (!pos.empty()) {
			int x = pos.front().first; 
			int y = pos.front().second;
			int c = jarak[x][y];
			pos.pop();
			if (cek(x-1,y)) {
				jarak[x-1][y] = c+1;
				pos.push(make_pair(x-1,y));
			}
			if (cek(x+1,y)) {
				jarak[x+1][y] = c+1;
				pos.push(make_pair(x+1,y));
			}
			if (cek(x,y-1)) {
				jarak[x][y-1] = c+1;
				pos.push(make_pair(x,y-1));
			}
			if (cek(x,y+1)) {
				jarak[x][y+1] = c+1;
				pos.push(make_pair(x,y+1));
			}
		}
		cout << jarak[titik[1].first][titik[1].second] << '\n';
	}
	return 0;
}