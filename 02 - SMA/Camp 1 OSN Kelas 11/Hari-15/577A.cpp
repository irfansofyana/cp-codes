#include <bits/stdc++.h>
using namespace std;

int x,n,i,j;
int ans;

int main(){
	cin.tie(0);
	cin >> n >> x;
	for (i = 1 ; i <= (int)sqrt(x); i++) {
		if (x%i==0) {
			j = x/i;
			if (i==j) {
				if (i<=n) ans++;
			}
			else {
				if (i<=n && j<=n) ans+=2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}