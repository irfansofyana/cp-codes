#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j,k;
bool bisa[1005][1005];
char A[1005][1005];
int ans;
int kudax[]={1,1,2,2,-1,-1,-2,-2};
int kuday[]={-2,2,1,-1,-2,2,1,-1};
int dx[]={0,0,-1,-1,-1,1,1,1};
int dy[]={1,-1,-1,0,1,-1,0,1};
vector<pi> ratu;
int tc;

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m) {
		if (n==0 && m==0) break;
		memset(bisa,true,sizeof bisa);
		memset(A,'0',sizeof A);
		ratu.clear();
		ans = 0;
		cin >> k;
		for (i = 0 ; i < k ; i++) {
			int x,y;
			cin >> x >> y;
			x--; y--;
			bisa[x][y] = false;
			A[x][y] = 'R';
			ratu.push_back(make_pair(x,y));
		}
		FOR 
		cin >> k;
		for (i = 0 ; i < k ; i++) {
			int x,y;
			cin >> x >> y;
			x--; y--;
			bisa[x][y] = false;
			A[x][y] = 'K';
			for (int z =0  ; z < 8 ; z++) {
				if (cek(x+kudax[z],y+kuday[z])) bisa[x+kudax[z]][y+kuday[z]] = false;
			}
		}
		cin >> k;
		for (i = 0 ; i < k ; i++) {
			int x,y;
			cin >> x >> y;
			x--; y--;
			A[x][y] = 'P';
			bisa[x][y] = false;
		}
		for (i = 0 ; i < ratu.size(); i++){
			int x,y;
			x = ratu[i].first; y = ratu[i].second;
			for (int z = 0 ; z < 8 ; z++) {
				int arx,ary;
				x = ratu[i].first; y = ratu[i].second;
				arx = dx[z]; ary = dy[z];
				while (cek(x+arx,y+ary) && A[arx+x][y+ary]=='0') {
					bisa[arx+x][y+ary] = false;
					x = arx+x; y = ary+y;
				}					//A[arx+x][y+ary] = 'x';

			}
		}
		for (i = 0 ; i < n ; i++){
			for (j = 0 ; j < m; j++) 
				if (bisa[i][j]) {
					ans++;
				}
		}
		cout << "Board " << ++tc << " has " << ans << " safe squares." << '\n';
	}
	return 0;
}