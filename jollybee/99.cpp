#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
int m;
int A[110];

int main(){
	OPTIMASI
	int tc = 0;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		cout << "Kasus #" << ++tc << ":" << '\n';
		while (m--) {
			int x,y;
			cin >> x >> y;
			int ans = 0;
			for (i = 0 ; i < n ; i++) {
				if (A[i]>x && A[i]<y) ans++;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}