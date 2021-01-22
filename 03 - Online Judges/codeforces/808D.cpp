#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int n;
ll prefix[100005];
ll arr[100005];

bool binser(ll x,int ki,int ka,int idx,ll kurang){
	int l = ki, r = ka;
	while (l <= r) {
		int mid = (l + r)/2;
		
		ll nnilai = prefix[mid];
		if (mid > idx) nnilai -= kurang;

		if (nnilai == x) return true;
		else if (nnilai > x) r = mid - 1;
		else l = mid + 1;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	ll sum = 0;
	for (int i = 1; i <= n ; i++) {
		ll x;
		cin >> x;
		sum += x;
		arr[i] = x;
		prefix[i] = prefix[i-1] + x;
	}
	if (n == 1) cout << "NO\n";
	else if (sum % 2 == 1) cout << "NO" << '\n';
	else {
		if (binser(sum/2, 1, n, 0, 0)) cout << "YES\n";
		else {
			for (int i = 1; i <= n ; i++) {
				if (i == 1) {
					if (binser(sum/2 , i + 1, n, i, arr[i])) {
						cout << "YES\n"; return 0;
					}
				}
				else if (i == n) {
					if (binser(sum/2 - arr[i], 1, i - 1, i, arr[i])) {
						cout << "YES\n"; return 0;
					}
				}
				else {
					if (binser(sum/2 - arr[i], 1, i - 1, i, arr[i])) {
						cout << "YES\n"; return 0;
					}
					if (binser(sum/2, i + 1, n, i, arr[i])){ 
						cout << "YES\n"; return 0;
					}
				}
			}
			cout << "NO\n";
		}
	}
	return 0;
}