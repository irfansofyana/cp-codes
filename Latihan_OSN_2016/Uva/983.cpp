#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;
typedef long long ll;

ll n,m,i,j;
ll A[1005][1005];
ll B[1005][1005];
pi mulai;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool pertama = true;
	while (cin >> n >> m){
		if (pertama) pertama = false;
		else cout << '\n';
		for (i = n-1 ; i >= 0 ; i--) {
			for (j = 0 ; j < n ; j++)
				cin >> A[i][j];
		}
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				if (i > 0) A[i][j] += A[i-1][j];
				if (j > 0) A[i][j] += A[i][j-1];
				if (i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
			}
		}
		/*for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++){
				cout << A[i][j] << " ";
			}
			cout << '\n';
		}*/
		ll xx = 0,yy=0;
		for (i = m-1 ; i < n; i++){
			yy = 0;
			for (j = m-1; j < n ; j++) {
				// end point (i,j) start point (i-m+1,j-m+1)
				//cout << i-m+1 << " " << j-m+1 << " " << i << " " << j << '\n';
				ll x = A[i][j];
				if (i-m+1 > 0) x -= A[i-m][j];
				if (j-m+1 > 0) x -= A[i][j-m];
				if (i-m+1 > 0 && j-m+1 > 0) x += A[i-m][j-m];
				B[xx][yy] = x;
				yy++;
			}
			xx++;
		}
		ll sum = 0;
		for (i = xx-1 ; i >= 0 ; i--) {
			for (j = 0; j < yy ; j++) {
				cout << B[i][j] << '\n';
				sum += B[i][j];
			}
		}
		cout << sum << '\n';
	}
	return 0;
}