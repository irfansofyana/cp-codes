#include <bits/stdc++.h>
using namespace std;

char A[105][105];
int n,i,j;

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<n) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < n ; j++)
			cin >> A[i][j];
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			if (A[i][j]=='#') {
				int frek = 1;
				if (cek(i,j+1)) {
					if (A[i][j+1]=='#') frek++;
				}
				if (cek(i,j+2)) {
					if (A[i][j+1]=='#') frek++;
				}
				if (frek==3) {
					if (cek(i-1,j+1)) {
						if (A[i-1][j+1]=='#') frek++;
					}
					if (cek(i+1,j+1)) {
						if (A[i+1][j+1]=='#') frek++;
					}
					if (frek==5) {
						A[i][j] = '.'; A[i][j+1] = '.'; A[i][j+2]='.'; A[i-1][j+1]='.'; A[i+1][j+1] = '.';
					}
				}
			}
		}
	}
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < n ; j++) {
			if (A[i][j]=='#') {
				puts("NO");
				return 0;
			}
		}
	}
	puts("YES");
	return 0;
}