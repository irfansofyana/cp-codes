#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int arr[1005];
int maks,mini;
int brr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
	}
	for (i = 0 ; i < n ; i++) {
		int idx,minn;
		bool pertama = true;
		for (j = 0 ; j < m ; j++) {
			if (arr[j] > 0) {
				if (pertama) {
					idx = j;
					minn = arr[j];
					pertama = false;
				}
				else if (arr[j] < minn) {
					minn = arr[j];
					idx = j;
				}
			}
		}
		mini += arr[idx];
		arr[idx]--;
	}
	for (i = 0 ; i < n ; i++) {
		int idx,makss;
		bool pertama = true;
		for (j = 0 ; j < m; j ++) {
			if (brr[j] > 0) {
				if (pertama) {
					pertama = false;
					idx = j;
					makss = brr[j];
				}
				else if (brr[j] > makss) {
					makss = brr[j];
					idx = j;
				}
			}
		}
		maks += brr[idx];
		brr[idx]--;
	}
	//cout << '\n';
	cout << maks << " " << mini << '\n';
	return 0;
}