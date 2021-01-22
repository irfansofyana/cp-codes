#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

int n;
ll arr[105], fpb;
ll maks;

ll gcd(ll x,ll y){
	return (y == 0 ? x : gcd(y,x%y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		if (i == 0) fpb = arr[i];
		else fpb = gcd(arr[i], fpb);
		if (i == 0) maks = arr[i];
		else maks = max(maks, arr[i]);
	}
	ll bil = (maks/fpb) - n;
	if (bil%2 == 1) cout << "Alice\n";
	else cout << "Bob\n";
	return 0;
}