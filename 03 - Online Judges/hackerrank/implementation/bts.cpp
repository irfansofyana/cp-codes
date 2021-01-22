#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int gcd(int x,int y){
	return (y == 0 ? x : gcd(y, x%y));
}

int n, m;
int arr[15];

bool can(int x){
	for (int i = 0 ; i < n; i++) {
		if (x % arr[i] != 0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	int fpb;
	for (int i = 0; i < m ; i++) {
		int x; 
		cin >> x;
		if (i == 0) fpb = x;
		else fpb = gcd(x, fpb);
	}
	int ans = 0;
	for (int i = 1; i <= (int)sqrt(fpb); i++) {
		if (fpb%i == 0) {
			int j = fpb/i;
			if (i != j) {
				if (can(i)) ans++;
				if (can(j)) ans++;
			}
			else if (can(i)) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}	