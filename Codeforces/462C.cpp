#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, ans;
ll arr[300005];
ll sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		ans += arr[i];
		sum += arr[i];
	} 
	if (n > 1 ) ans += sum;
	ll prev = 0;
	sort(arr, arr + n);	
	for (int i = 0 ; i < n-2; i++) {
		prev += arr[i];
		ans += sum - prev;
	}
	cout << ans << '\n';
	return 0;
}