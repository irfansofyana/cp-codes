#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,p,q;
int A[35];
int tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> p >> q;		// banyak = p , berat = q
		for (i = 0 ; i < n ; i++) cin >> A[i];
		i = 0;
		int ans = -1;
		while (i < n) {
			int tot = A[i]; int frek = 1;
			j = i+1;
			while (j < n && frek < p && tot < q) {
				frek++;
				tot += A[j];
				j++;
			}
			if (tot > q) {
				ans = max(ans,frek-1);
			}
			else ans = max(ans,frek);
			i++;
		}
		cout << "Case " << ++tc << ": " << ans << '\n';
 	}
	return 0;
}