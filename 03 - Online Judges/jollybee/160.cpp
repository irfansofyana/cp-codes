#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll n,i,j;
ll A[10005];
ll t,tc;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n);
		i = 0;
		ll ans = 0;
		while (i<n) {
			ans++;
			j = i+1;
			while (A[j]==A[i] && j<n){
				j++;
			}
			i = j;
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	} 
	return 0;
}