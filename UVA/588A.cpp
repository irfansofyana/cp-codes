#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j,x,y,mini;
int ans;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y;
		if (i==0) {
			ans += x*y;
			m += x; mini = y;
		}
		else {
			if (y>mini) ans += x*mini;
			else {
				ans += x*y;
				mini = y;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}