#include<bits/stdc++.h>

using namespace std;

const int N = 50000;

typedef long long ll;

ll t,i,j;
ll n;
ll arr[N + 5];
ll ans,sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		memset(arr,0,sizeof arr);
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			arr[j]++;
		}
		ans = 0; sum = 0;
 		for (i = 1 ; i <= N ; i++) {
 			sum += arr[i];
 			ans += arr[i] * sum;
		}
		cout << ans << '\n';
	}
	return 0;
}
