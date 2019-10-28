#include <bits/stdc++.h>
#define OPTIMASI 
using namespace std;

int t,n,m,i,j,k,l,idx,ans;
char arr[4][4],tmp[4][4];
char sudah[1005][4][4];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool cek(int x,int y){
	return (x >= 0 && x < 3 && y >= 0 && y < 3);
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> t;
	while (t--) {
		for (i = 0 ; i < 3 ; i++) 
			for (j = 0 ; j < 3 ; j++)
				cin >> arr[i][j];
		idx = 0; ans = -(int)1e9;
		while (1) {
			if (idx == 0) {
				for (i = 0 ; i < 3; i++)
					for (j = 0 ; j < 3 ; j++)
						sudah[idx][i][j] = arr[i][j];
				idx++;
			}
			else {
				for (i = 0 ; i < 3 ; i++) {
					for (j = 0 ; j < 3; j++) {
						int jum = 0;
						for (k = 0 ; k < 4 ; k++) {
							if (cek(i+dx[k],j+dy[k]))
								jum += arr[i+dx[k]][j+dy[k]]-'0';
						}
						tmp[i][j] = (jum%2 == 0 ? '0' : '1');
					}
				}
				
				for (i = 0 ; i < idx ; i++) {
					bool can = true;
					for (j = 0 ; j < 3; j++) {
						for (k = 0; k < 3 ; k++) {
							if (tmp[j][k] != sudah[i][j][k]) {
								can = false;
								break;
							}
						}
						if (!can) break;
					}
					if (can) {
						ans = i-1;
						break;
					}
				}
				
				if (i == idx) {
					for (j = 0 ; j < 3 ; j++) {
						for (k = 0 ; k < 3 ; k++) {
							sudah[idx][j][k] = tmp[j][k];
							arr[j][k] = tmp[j][k];
						}
					}
					idx++;
				}
				if (ans != -(int)1e9) break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}