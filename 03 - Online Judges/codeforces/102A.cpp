#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,m,i,j,k;
ll A[105];
bool hub[105][105];
ll ans;

int main(){
	OPTIMASI
	cin >> n >> m;
	memset(hub,false,sizeof hub);
	for (i = 1 ; i <= n ; i++) cin >> A[i];
	for (i = 0 ; i < m ; i++) {
		int x,y;
		cin >> x >> y;
		hub[x][y] = true;
		hub[y][x] = true;
	}
	ans = 2e10;
	for (i = 1; i <= n ; i++) {
		for (j = i+1; j<=n ; j++){
			for (k = j+1; k<=n ; k++){
				if (hub[i][j] && hub[i][k] && hub[j][k]){
					ans = min(ans,A[i]+A[j]+A[k]);
				}
			}
		}
	}
	cout << (ans==2e10?-1:ans) << '\n';
	return 0;
}