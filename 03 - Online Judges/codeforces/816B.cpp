#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, k, q;
int freq[200005], prefix[200005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> q;
	for (int i = 0 ; i < n ; i++) {
		int l, r;
		cin >> l >> r;
		freq[l]++;
		freq[r+1]--;
	}
	int tot = 0;
	for (int i = 1; i <= 200000; i++) {
		tot += freq[i];
		freq[i] = tot;
	}
	for (int i = 1 ; i <= 200000; i++) {
		if (freq[i] >= k) prefix[i] = prefix[i-1] + 1;
		else prefix[i] = prefix[i-1];
	}
	while (q--) {
		int le,ri;
		cin >> le >> ri;
		cout << prefix[ri] - prefix[le-1] << '\n';
	}
	return 0;	
}