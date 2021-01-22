#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

const string ANS = "ALLIZZWELL";
int t,r,c;
int i,j,k;
char arr[105][105];
bool bisa;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
pair<int,int> ambil[15];

bool cek(int x,int y){
	return (x>=0 && x<r && y>=0 && y<c && arr[x][y]!='.');
}

void dfs(int pos,int x,int y){
	if (arr[x][y] != ANS[pos]) return;
	if (pos == 9) bisa = true;
	for (int z = 0 ; z < 8 ; z++){
		if (cek(x+dx[z],y+dy[z])) {
			char tmp = arr[x][y];
			arr[x][y] = '.';
			dfs(pos+1,x+dx[z],y+dy[z]);
			arr[x][y] = tmp;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> r >> c;
		for (i = 0 ; i < r ; i++){
			for (j = 0 ; j < c; j++) {
				cin >> arr[i][j];
			}
		}
		for (i = 0 ; i < r ; i++) {
			for (j = 0 ; j < c ; j++) {
				bisa = false;
				dfs(0,i,j);
				if (bisa) break;
			}
			if (bisa) break;
		}
		cout << (bisa ? "YES" : "NO") << '\n';
	}
	return 0;
}