#include <bits/stdc++.h>
#define INF 2000000000
using namespace std;

long long n,m,i,j,e,k;
long long t,x,y,z,ans;
long long waktu[1000][1000];

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> n >> e >> t >> m;
	for (i = 1; i<= n ; i++){
		for (j = 1 ; j<= n ; j++) {
			if (i!=j) waktu[i][j] = INF;
		}
	}
	for (i = 0 ; i < m ; i++) {
		cin >> x >> y >> z;
		waktu[x][y] = z;
	}
	for (k = 1 ; k<= n ; k++) { 
		for (i = 1 ; i<= n ; i++) {
			for (j = 1 ; j<= n ; j++) {
				waktu[i][j] = min(waktu[i][j],waktu[i][k]+waktu[k][j]);
			}
		}
	}
	for (i = 1 ; i<= n ; i++) {
		if (waktu[i][e]<=t) ans++;
	}
	cout << ans << endl;
	return 0;
}