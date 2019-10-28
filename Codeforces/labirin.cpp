#include <bits/stdc++.h>
using namespace std;

int N, M, hubung;
char arr[1005][1005];
int node[1005][1005];
int sum[1000005];

void dfs(int x,int y,int nodal) {
	node[x][y] = nodal;
	arr[x][y] = '#';
	hubung++;
	if (x-1 >= 0 && y >= 0) if (arr[x-1][y] == '.') dfs(x-1, y, nodal);
	if (x+1 < N && y >= 0) if (arr[x+1][y] == '.') dfs(x+1, y, nodal);
	if (y-1 >= 0) if (arr[x][y-1] == '.') dfs(x, y-1, nodal);
	if (y+1 < M) if (arr[x][y+1] == '.') dfs(x, y+1, nodal);
}

vector<int> smt;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M;	
	for (int i = 0 ; i < N; i++)
		for (int j = 0; j < M; j++){
			cin >> arr[i][j];
		}
	memset(node, -1, sizeof node);
	int nomor = 0;
	for (int i = 0 ; i < N; i++) {
		for (int j = 0 ; j < M; j++) {
			if (arr[i][j] == '.') {
				hubung = 0;
				dfs(i, j, nomor);
				sum[nomor] = hubung;
				nomor++;
			}
		}
	}
	for (int i = 0 ; i < N; i++) {
		for (int j = 0 ; j < M; j++) {
			if (arr[i][j] == '*') {
				if (i-1 >= 0 && arr[i-1][j] == '#') smt.push_back(node[i-1][j]);
				if (i+1 < N && arr[i+1][j] == '#') smt.push_back(node[i+1][j]);
				if (j-1 >= 0 && arr[i][j-1] == '#') smt.push_back(node[i][j-1]);
				if (j+1 < M && arr[i][j+1] == '#') smt.push_back(node[i][j+1]);
				sort(smt.begin(), smt.end());
				int k = 0;
				int res = 1;
				while (k < smt.size()) {
					res += sum[smt[k]];
					int l = k+1;
					while (l < smt.size() && smt[l] == smt[k]) l++;
					k = l;
				}
				cout << res%10;
				smt.clear();
			}
			else cout << '.';
		}
		cout << '\n';
	}
	return 0;
}