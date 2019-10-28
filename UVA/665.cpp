#include <bits/stdc++.h>
#define OPTIMASI 
using namespace std;

int t,n,m,i,j,k;
int arr[105][105];
int freq[105];
char res[105];

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < m ; i++) {
			cin >> freq[i]; 
			for (j = 0 ; j < 2*freq[i] ; j++)
				cin >> arr[i][j];
			cin >> res[i];
		}
		int ans;
		int tot = 0;
		for (i = 1 ; i <= n ; i++) {
			for (j = 0 ; j < m ; j++) {
				int l = 0, r = 0; 
				if (res[j] == '=') {
					for (k = 0 ; k < 2*freq[j]; k++) {
						if (k < freq[j]) {
							if (arr[j][k] != i) 
								l += 1;
						}
						else {
							if (arr[j][k] != i) 
								r += 1;
						}
					}
					if (l!=r) break;
				}
			}
			if (j == m) {
				tot++;
				ans = i;
			}
		}
		if (tot != 1) cout << 0 << '\n';
		else cout << ans << '\n';
		if (t > 0) cout << '\n';
	}
	return 0;
}