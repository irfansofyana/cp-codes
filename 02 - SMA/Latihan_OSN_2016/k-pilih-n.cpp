#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[1005],ans;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	ans = 2e9;
	for (i = 0 ; i+m-1 < n ; i++) {
		ans = min(ans,A[i+m-1]-A[i]);
	}
	cout << ans << '\n';
	return 0;
}