#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll N = 100000;

ll n,i,j,ans;
ll arr[N + 5],brr[N + 5];

bool comp(ll a, ll b){
	return a > b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
		brr[i] = arr[i];
	}
	sort(arr, arr + n); sort(brr, brr + n , comp);
	for (i = 0 ; i < n ; i++) {
		ans += arr[i] * brr[i];
		ans %= 10007;
	}
	cout << ans << '\n';
	return 0;
}
