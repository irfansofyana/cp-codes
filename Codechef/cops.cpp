#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

int t,x,y,m,i,j;
int ans;
bool A[105];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> m >> x >> y;
		memset(A,false,sizeof A);
		while (m--) {
			cin >> j;
			for (i = max(1,j-x*y); i <= min(100,j+x*y); i++) A[i] = true;
		}
		ans = 0;
		for (i = 1 ; i<=100; i++) {
			if (!A[i]) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}