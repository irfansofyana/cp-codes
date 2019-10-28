#include <bits/stdc++.h>
using namespace std;

int main(){
	long long ans = 0;
	long long i,n,j,k;
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		for (j = i + 1; j <= n ; j ++) {
			for (k = j + 1;  k <= n ; k++) {
				if (i + j + k == n) ans++;
			}
		}
	}
	cout << ans << '\n';
}