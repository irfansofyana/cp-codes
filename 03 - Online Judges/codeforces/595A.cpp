#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int ans;

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m; j ++) {
			int x,y;
			cin >> x >> y;
			ans += ((x==0 && y==0)?0:1);
		}
	}
	cout << ans << '\n';
	return 0;
}