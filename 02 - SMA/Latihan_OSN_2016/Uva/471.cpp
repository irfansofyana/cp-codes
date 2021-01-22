#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll t;

bool cek(ll x){
	int arr[10];
	memset(arr,0,sizeof arr);
	while (x > 0) {
		arr[x%10]++;
		x /= 10;
	}
	for (int z = 0 ; z < 10 ; z++) {
		if (arr[z] >= 2) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= 9876543210 / n ; i++) {
			if (cek(i)) {
				if (cek(i*n)) {
					cout << i*n << " / " << i << " = " << n << '\n';
				}
			}
		}
		if (t!=0) cout << '\n';
	}
	return 0;
}