#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int t;
char A[105][105];
int jarak[105][105];
queue<pair<int,int> > q;
pair<int,int> target;

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m && A[x][y]!='#' && jarak[x][y]==-1) return true;
	return false;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(jarak,-1,sizeof jarak);
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m; j++){
				cin >> A[i][j];
				if (A[i][j]=='P') target = make_pair(i,j);
				else if (A[i][j]=='H') q.push(make_pair(i,j));
			}
		jarak[q.front().first][q.front().second] = 0;
		while(!q.empty()) {
			int x = q.front().first; 
			int y = q.front().second;
			q.pop();
			if (cek(x-1,y)) {
				jarak[x-1][y] = jarak[x][y]+1;
				q.push(make_pair(x-1,y));
			}
			if (cek(x+1,y)) {
				jarak[x+1][y] = jarak[x][y]+1;
				q.push(make_pair(x+1,y));
			}
			if (cek(x,y-1)) {
				jarak[x][y-1] = jarak[x][y]+1;
				q.push(make_pair(x,y-1));
			}
			if (cek(x,y+1)) {
				jarak[x][y+1] = jarak[x][y]+1;
				q.push(make_pair(x,y+1));
			}
		}
		cout << jarak[target.first][target.second]<< " " << target.first+1 << " " << target.second+1 << '\n';
	}
	return 0;
}