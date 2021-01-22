#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[55],k,l;
int tc,ans;

int main(){
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		ans = -1e7;
		for (i = 0 ; i < n ; i++) {
			for (j = i+1; j < n ; j++) {
				if ((A[i]+A[j])%2==0) {
					k = (A[i]+A[j])/2;
					l = A[i]-k;
					ans = max(ans,k*l);
					l = A[j]-k;
					ans = max(ans,k*l);
				}
			}
		}
		cout << "Case #" << ++tc << ": " << ans << '\n' ;
	}
	return 0;
}