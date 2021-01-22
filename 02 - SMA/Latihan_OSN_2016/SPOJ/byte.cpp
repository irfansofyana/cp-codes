#include <bits/stdc++.h>
using namespace std;

int r,c,i,j;
int A[105][105];
int t;

bool cek(int x,int y){
	if (x>=0 && x<r && y>=0 && y<c) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> r >> c;
		for (i = 0 ; i < r ; i++) {
			for (j = 0 ; j < c; j++)
				cin >> A[i][j];
		}
		int ans = -1;
		for (i = 1 ; i < r; i++) {
			for (j = 0 ; j < c; j++) {
				int maks = -1;
				if (cek(i-1,j-1)) maks = max(maks,A[i-1][j-1]);
				if (cek(i-1,j)) maks = max(maks,A[i-1][j]);
				if (cek(i-1,j+1)) maks = max(maks,A[i-1][j+1]);
				A[i][j] += maks;
				if (i==r-1) ans = max(ans,A[i][j]);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}