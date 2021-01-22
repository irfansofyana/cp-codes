#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int jarak[1005][1005];
int n,m,i,j;
int x1,x2,x3,x4,x5,x6;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
queue<pair<int,int> > q;

bool cek(int x,int y){
	if (x<x1 || x>x3 || y < x2 || y > x4) return false;
	return true;
}

int main(){
	OPTIMASI
	cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
	memset(jarak,-1,sizeof jarak);
	q.push(make_pair(x5,x6));
	jarak[x5][x6] = 0;
	while (!q.empty()) {
		int c,d;
		c = q.front().first; d = q.front().second;
		q.pop();
		for (i = 0 ; i < 4 ; i++) {
			if (cek(c+dx[i],d+dy[i]) && jarak[c+dx[i]][d+dy[i]]==-1) {
				jarak[c+dx[i]][d+dy[i]] = jarak[c][d]+1;
				q.push(make_pair(c+dx[i],d+dy[i]));
			}
		}
	}
	int ans = 1e9;
	for (i = x2 ; i <= x4 ; i++) {
		ans = min(ans,jarak[x1][i]);
	}
	for (i = x2 ; i<= x4 ; i++) {
		ans = min(ans,jarak[x3][i]);
	}
	for (i = x1 ; i<= x3 ; i++) {
		ans = min(ans,jarak[i][x2]);
	}
	for (i = x1 ; i <= x3 ; i++) {
		ans = min(ans,jarak[i][x4]);
	}
	cout << ans+1 << '\n';
	return 0;
}