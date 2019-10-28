#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j,tambah,k;
int arr[50][50];
int ukuran,bil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(arr, 0 , sizeof arr);
	ukuran = 1; tambah = 2; bil = 1;
	for (i = 0 ; i < n ; i++) {
		j = (n/2);
		arr[j][i] = bil;
		bil += 2;
		for (int z = 1 ; z <= (ukuran-1)/2 ; z++) {
			arr[j - z][i] = bil;
			bil += 2;
		}
		for (int z = 1 ; z <= (ukuran-1)/2; z++) {
			arr[j + z][i] = bil;
			bil += 2;
		}
		if (ukuran == n) tambah = -2;
		ukuran += tambah;
	}
	bil = 2;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			if (arr[i][j] == 0) {
				cout << bil ;
				bil += 2;
			} 
			else cout << arr[i][j];
			cout << (j == n-1 ? '\n' : ' ');
		}
	}
	return 0;
}
