#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 1 ; i <= (int)sqrt(n); i++) {
		for (j = i; i*j <= n; j++) ans++;
	}
	cout << ans << '\n';
	return 0;
}