#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int tot;
int row[1005],kolom[1005];
char ch[1005][1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			cin >> ch[i][j];
			if (ch[i][j] == '*') {
				row[i]++;
				kolom[j]++;
				tot++;
			}
		}
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++){
			int x = 0;
			if (ch[i][j] == '*') x = 1;
			if (row[i] + kolom[j] - x == tot) {
				cout << "YES\n";
				cout << i + 1 << " " << j + 1 << '\n';
				return 0;
			}
		}
	}
	cout << "NO\n";	
	return 0;
}
