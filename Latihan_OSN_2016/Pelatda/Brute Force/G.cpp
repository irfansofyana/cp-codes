#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int r[2],d[2],c[2];
bool udah[15];
int ambil[15];
int arrr[3][3];
bool ans;

void permutasi(int k) {
	if (k==4) {
		int arr[5][5];
		arr[0][0] = ambil[0];
		arr[0][1] = ambil[1];
		arr[1][0] = ambil[2];
		arr[1][1] = ambil[3];
		if (arr[0][0]+arr[0][1]==r[0] && arr[1][0]+arr[1][1]==r[1]) {
			if (arr[0][0]+arr[1][0]==c[0] && arr[0][1]+arr[1][1]==c[1]) {
				if (arr[0][0]+arr[1][1]==d[0] && arr[0][1]+arr[1][0]==d[1]) {
					for (int z = 0 ; z < 2 ; z++) {
						for (int zz = 0 ; zz < 2 ; zz++)
							arrr[z][zz] = arr[z][zz];
					}
					ans = true;
				}
			}
		}
	}
	else {
		for (int z = 1 ; z <= 9 ; z++) {
			if (!udah[z]) {
				udah[z] = true;
				ambil[k] = z;
				permutasi(k+1);
				udah[z] = false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> r[0] >> r[1] >> c[0] >> c[1] >> d[0] >> d[1];
	ans = false;
	memset(udah,false,sizeof udah);
	permutasi(0);
	if (ans) {
		for (i = 0 ; i < 2 ; i++){
			for (j = 0 ; j < 2 ; j++){
				cout << arrr[i][j];
				cout << (j==1 ? '\n': ' ');
			}
		}
	}
	else cout << -1 << '\n';
	return 0;
}