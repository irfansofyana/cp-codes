#include <bits/stdc++.h>
using namespace std;

int ans,i,j,k;
int c;
int n,maks,mini;

int main(){
	cin >> n;
	mini = 1000;
	for (i = 1 ; i<=n; i++) {
		for (j = 1 ; j <= n ; j++) {
			if (j!=i) {
				for (k = 1 ; k <= n ; k++) {
					if (k!=i && k!=j) {
						maks = max(maks,i+j+k);
						mini = min(mini,i+j+k);
						ans += i+j+k;
						c++;
					}
				}
			}
		}
	}
	cout << mini << " " << maks << endl;
	cout << c << " " << ans << endl;
	return 0;
}