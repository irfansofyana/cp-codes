#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,k,l;
ll s2,r2,s3,r3,s4,r4;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		s2 = r2 = 0; s3 = r3 = 0; s4 = r4 = 0;
		for (i = 1 ; i <= n ; i++) {
			for (j = 1 ; j <= n; j++) {
				if (i==j) {
					s2 += (n-i+1)*(n-j+1);
				}
				else r2 += (n-i+1)*(n-j+1);
			}
		}
		for (i = 1 ; i <= n ; i++) {
			for (j = 1; j <= n ; j++) {
				for (k = 1 ; k <= n ; k++) {
					if (i==j && j==k && i==k) s3 += (n-i+1)*(n-j+1)*(n-k+1);
					else r3 += (n-i+1) * (n-j+1) * (n-k+1);
				}
			}
		}
		for (i = 1 ; i <= n ; i++) {
			for (j = 1 ; j <= n ; j++) {
				for (k = 1; k <=n ; k++) {
					for (l = 1 ; l <= n ; l++) {
						if (i==j && i==k && i==l && j==k && j==l && k==l) s4 += (n-i+1)*(n-j+1)*(n-k+1)*(n-l+1);
						else r4 += (n-i+1)*(n-j+1)*(n-k+1)*(n-l+1);
					}
				}
			}
		}
		cout << s2 << " " << r2 << " " << s3 << " " << r3 << " " << s4 << " " << r4 << '\n'; 
	}
	return 0;
}