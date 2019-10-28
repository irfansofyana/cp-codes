#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int t;
string ans,jaw;
int poin[1005];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> ans >> jaw;
		for (i = 0 ; i <= n ; i++) cin >> poin[i];
		int maks = -100;
		for (i = 0 ; i < n ; i++) {
			int temp = 0;
			for (j = 0 ; j < n ; j++) {
				int idx;
				idx = (i+j)%n;
				if (ans[idx]==jaw[idx]) temp++;
				else break;
			}
			maks = max(maks,poin[temp]);
		}
		cout << maks << '\n';
	}
	return 0;
}