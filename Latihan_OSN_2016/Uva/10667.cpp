#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,k,l;
bool bisa[105][105];
int arr[105][105];
int m;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		memset(bisa,true,sizeof bisa);
		cin >> n >> m;
		while (m--) {
			int a,b,c,d;
			cin >> a >> b >> c >> d;
			a--; b--; c--; d--;
			for (i = a ; i <= c ; i++)
				for (j = b ; j <= d; j++)
					bisa[i][j] = false;
		}
		memset(arr,0,sizeof arr);
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				if (bisa[i][j]) arr[i][j] = 1;
				else arr[i][j] = 0;
				if (i > 0) arr[i][j] += arr[i-1][j];
				if (j > 0) arr[i][j] += arr[i][j-1];
				if (i > 0 && j > 0) arr[i][j] -= arr[i-1][j-1];
			}
		}
		int ans = 0;
		for (i = 0 ;i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				for (k = i ; k < n ; k++) {
					for (l = j; l < n ; l++) {
						int x = arr[k][l];
						if (i > 0) x -= arr[i-1][l];
						if (j > 0) x -= arr[k][j-1];
						if (i > 0 && j > 0) x += arr[i-1][j-1];
						if (x==(k-i+1)*(l-j+1)) ans = max(ans,x);
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}