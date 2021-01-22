#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;


int n,m,i,j,k;
char ans[15][15];
pi noww;
int x,y;
int dx[]={0,1,-1,0};
int dy[]={1,0,0,-1};
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x >> y;
	for (i = 0 ; i < 10 ; i++) {
		for (j = 0 ; j < 10; j++ )
			ans[i][j] = '*';
	}
	x--; y--;
	int temp = y;
	y = x;
	x = temp;
	noww = make_pair(x,y);	
	ans[x][y] = 'x';
	cin >> n;
	while (n--) {
		cin >> s >> k;
		int idx ;
		if (s=="kanan") idx = 0;
		else if (s=="kiri") idx = 3;
		else if (s=="atas") idx = 2;
		else idx = 1;
		for (i = 0 ; i < k ; i++) {
			int xx,yy;
			xx = noww.first+dx[idx]; yy = noww.second+dy[idx];
			if (s=="kanan" || s=="kiri") ans[xx][yy] = '-';
			else ans[xx][yy] = '|';
			noww = make_pair(xx,yy);
		}
	}
	for (i = 0 ; i < 10 ; i++){
		for (j = 0 ; j < 10 ; j++)
			cout <<ans[i][j];
		cout << '\n';
	}
	return 0;
}