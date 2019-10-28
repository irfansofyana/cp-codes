#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t,i,n,j,ans;
ll sum,arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		sum = 0; ans = 0; i = 0;
		while (i < n) {
			if (i == 0 || i == n-1) {
				ans++;
				sum += arr[i];
				i++;
			}
			else {
				if (sum + arr[i] < arr[i+1]) {
					sum += arr[i];
					ans++;
				}
				i++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
