#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;
ll n,i,j;
ll A[100005],ans,maks;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		maks = -1;
		for (i = 0 ; i < n ; i++) {
			cin >> A[i];
			maks = max(maks,A[i]);
		}
		ans = maks;
		for (i = 0 ; i < n ; i++) {
			if (A[i]<maks) {
				maks--;
			}
			else {
				ans += A[i]-maks;
				maks += A[i]-maks; maks--;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}