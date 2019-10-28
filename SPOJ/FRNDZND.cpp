#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,q;
int arr[100005];
int l,r,i;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> q;
	for (i = 1 ; i <= n ; i++) cin >> arr[i];
	while (q--) {
		cin >> l >> r;
		if (l == r) cout << arr[l] << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}
