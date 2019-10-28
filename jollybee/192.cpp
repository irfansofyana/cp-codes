#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int ans;
char A[1005][1005];

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y<m && A[x][y]=='#') return true;
	return false;
}

void banjiri(int x,int y){
	A[x][y] = '.';
	bool atas,bawah,kiri,kanan;
	atas = false; bawah = false; kiri = false; kanan = false;
	if (x-1<0)  atas = true;
	if (x+1>=n) bawah = true;
	if (y-1<0) kiri = true;
	if (y+1>=m) kanan = true;
	if (atas) {
		if (cek(n-1,y)) banjiri(n-1,y); 
	}
	else if (!atas) {
		if (cek(x-1,y)) banjiri(x-1,y);
	}
	if (bawah) {
		if (cek(0,y)) banjiri(0,y);
	}
	else if (!bawah) {
		if (cek(x+1,y)) banjiri(x+1,y);
	}
	if (kiri) {
		if (cek(x,m-1)) banjiri(x,m-1);
	}
	else if (!kiri) {
		if (cek(x,y-1)) banjiri(x,y-1);
	}
	if (kanan) {
		if (cek(x,0)) banjiri(x,0);
	}
	else if (!kanan) {
		if (cek(x,y+1)) banjiri(x,y+1);
	}
}

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++)
			cin >> A[i][j];
	}
	for (i = 0 ; i < n ; i++) {
		for (j = 0; j < m ; j++){
			if (A[i][j]=='#') {
				ans++;
				banjiri(i,j);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}