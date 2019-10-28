#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int w,h,n,k;
int i,j,ans;
bool A[505][505];
int a,b,c,d;

int main(){
	OPTIMASI
	while (cin >> w >> h >> n && w>0 && n>0 && h>0) {
		memset(A,false,sizeof A);
		for (i = 0 ; i < n ; i++) {
			cin >> a >> b >> c >> d;
			if (a<=c) {
				if (d>=b) {
					for (j = a ; j<= c ; j++)
						for (k = b ; k<= d; k++)
							A[j][k] = true;
				}
				else {
					for (j = a ; j<= c; j++) {
						for (k = b ; k >= d ;k--) 
							A[j][k] = true;
					}
				}
			}
			else if (c<a) {
				if (b>=d) {
					for (j = c ; j<= a ; j++)
						for (k = d ; k<= b; k++)
							A[j][k] = true;
				}
				else {
					for (j = c ; j<= a; j++) {
						for (k = d; k >= b ;k--) 
							A[j][k] = true;
					}
				}
			}
		}
		ans = 0;
		for (i = 1 ; i<=w ; i++) {
			for (j = 1 ; j<= h ; j++) {
				if (A[i][j]==false) ans++;
			}
		}
		if (ans==0) cout << "There is no empty spots." << endl;
		else if (ans==1) cout << "There is one empty spot." << endl;
		else cout << "There are " << ans << " empty spots." << endl;
	}
	return 0;
}