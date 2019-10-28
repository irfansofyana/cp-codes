#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,m,t;
ll arr[20005];
ll sisa,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < m ; i++)
			cin >> arr[i];
		sort(arr,arr+m);  
		ans = 0;
		j = m;
		for (i = 0 ; i < m ; i++) {
			if (j > arr[i] + 1) {
				j -= (arr[i]+1);
				ans += arr[i];
			}
			else {
				ans += (j-1);
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}