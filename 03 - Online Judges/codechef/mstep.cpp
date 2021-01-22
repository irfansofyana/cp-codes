#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j;
pair<int,int> A[250005];

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++){
				int x;
				cin >> x;
				A[x] = make_pair(i,j);
			}
		}
		long long ans = 0;
		for (i = 1 ; i < n*n; i++) {
			ans += abs(A[i].first-A[i+1].first)+abs(A[i].second-A[i+1].second);
		} 
		cout << ans << '\n';
	}
	return 0;
}