#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef pair<int,int> ii;

int t,n,m,i,j,hadap;
char arr[105][105];
string s;
ii pos;
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool can(int x,int y){
	return (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '*');
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		getline(cin,s);
		for (i = 0 ; i < n ; i++) {
			getline(cin,s);
			for (j = 0 ; j < m ; j++) {
				arr[i][j] = s[j];
			}
		}
		cin >> pos.fi >> pos.se;
		pos.fi--; pos.se--;
		hadap = 0;
		getline(cin,s);
		while (getline(cin,s)){
			bool ada = false;
			for (i = 0 ; i < s.size(); i++){
				if (s[i] == 'Q') {
					cout << pos.fi + 1 << " " << pos.se + 1 << " " ;
					if (hadap == 0) cout << 'N';
					else if (hadap == 1) cout << 'E';
					else if (hadap == 2) cout << 'S';
					else cout << 'W';
					cout << '\n';
					ada = true;
					break;
				}
				else if (s[i] == 'R') {
					hadap = (hadap + 1)%4;
				}
				else if (s[i] == 'L') {
					hadap = (hadap - 1 + 4)%4;
				}
				else if (s[i] == 'F') {
					if (can(pos.fi + dx[hadap], pos.se + dy[hadap])){
						pos.fi += dx[hadap];
						pos.se += dy[hadap];
					}
				}
				else continue;
			}
			if (ada) break;
		}
		if (t > 0) cout << '\n';
	}
	return 0;
}