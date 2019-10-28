#include <bits/setdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,i,j;
int row[1005][1005],kolom[1005][1005];
char arr[1005][1005];

int query_row(int baris,int i,int j){
	if (j < i) return 0;
	return row[baris][j] - (i == 0 ? 0 : row[baris][i-1]);
}
int query_kolom(int kol,int i,int j){
	if (j < i) return 0;
	return kolom[kol][j] - (i == 0 ? 0 : kolom[kol][i-1]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m ; j++)
			cin >> arr[i][j];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			if (j == 0 && arr[i][j] == '1') row[i][j] = 1;
			else if (j == 0) row[i][j] = 0;
			else if (arr[i][j] == '1') row[i][j] = 1 + row[i][j-1];
			else row[i][j] = row[i][j-1];
		}
	}
	for (i = 0 ; i < m ; i++) {
		for (j = 0 ; j < n ; j++) {
			if (j == 0 && arr[j][i] == '1') kolom[i][j] = 1;
			else if (j == 0) kolom[i][j] = 0;
			else if (arr[j][i] == '1') kolom[i][j] = kolom[i][j-1] + 1;
			else kolom[i][j] = kolom[i][j-1];
		}
	}
	int ans = 0;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m; j++) {
			if (arr[i][j] == '0') {
				//cek kiri : 
				if (query_row(i,0,j-1) > 0) ans++;
				//cek kanan :
				if (query_row(i,j+1,m-1) > 0) ans++;
				//cek atas :
				if (query_kolom(j,0,i-1) > 0) ans++;
				//cek bawah :
				if (query_kolom(j,i+1,n-1) > 0) ans++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}