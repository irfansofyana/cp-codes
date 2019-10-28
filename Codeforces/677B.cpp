#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,i,j;
ll arr[100005];
ll h,curr;

ll tambah(ll a,ll b){
	if (a%b == 0) return a/b;
	else return (a/b) + 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> h >> k;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	i = 0;
	ll ans = 0;
	while (i < n) {
		if (i == 0) {
			j = i;
			while (curr + arr[j] <= h && j < n) {
				curr += arr[j];
				j++;
			}
			if (curr - k < 0) curr = 0;
			else curr -= k;
			ans++; i = j;
		}
		else {
			j = i;
			if (curr + arr[j] > h) {
				ans += tambah(curr + arr[j] - h,k);
				ll tmp = tambah(curr + arr[j] - h,k);
				if (curr - tmp*k < 0) curr = 0;
				else curr -= tmp*k;
			}
			//cout << curr << '\n';
			j = i;
			while (curr + arr[j] <= h && j < n) {
				curr += arr[j];
				j++;
			}
			if (curr - k < 0) curr = 0;
			else curr -= k;
			ans++; i = j;
		}
	}
	if (curr > 0) {
		ans += tambah(curr,k);
	}
	cout << ans << '\n';
	return 0;
}