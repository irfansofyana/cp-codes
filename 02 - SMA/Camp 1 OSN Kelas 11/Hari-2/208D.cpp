#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long poin[55],sisa;
long long harga[6];
long long ans[6];

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ;i++) cin >> poin[i];
	for (i = 0 ; i < 5 ; i++) cin >> harga[i];
	for (i = 0 ; i < n ; i++) {
		sisa += poin[i];
		for (j = 4; j>= 0 ;j--) {
			ans[j] += (sisa/harga[j]);
			sisa -= harga[j] * (sisa/harga[j]);
			//cout << sisa << endl;
		}
		//cout << endl;
		//for (j = 0 ; j <= 4 ;j++) {
		//	cout << ans[j] << " ";
		//}
		//cout << endl;
	}
	for (j = 0 ; j < 5; j++) {
		if (j!=4) cout << ans[j] << " ";
		else cout << ans[j] << endl;
	}
	cout << sisa << endl;
	return 0;
}