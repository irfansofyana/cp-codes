#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,i,j;
ll arr[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	i = 0;
	ll ans = 0;
	while (i < n){
		j = i+1;
		while (j < n && arr[j]-arr[j-1] < k) {
			j++;
		}
		ans++;
		i = j;
	}
	cout << ans << '\n';
	return 0;
}