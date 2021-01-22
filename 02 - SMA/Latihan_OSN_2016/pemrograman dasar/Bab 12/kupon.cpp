#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int mini,ans,x;

int main(){
	cin >> n >> x;
	for (i = 0 ; i < n ; i++) {
		int y;
		cin >> y;
		if (i==0) {
			ans = y; mini = abs(x-y);
		}
		else if (abs(x-y) < mini) {
			mini = abs(x-y);
			ans = y;
		}
		else if (abs(x-y) == mini) {
			if (y < ans) ans = y;
		}
	}
	cout << ans << '\n';
	return 0;
}