#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, ans1, maks, mini;
int ans2;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n;
	for (int i = 0 ; i < n ; i++)  {
		int x; 
		cin >> x;
		if (i == 0) {
			maks = x; 
			mini = x;
		}
		else {
			if (x > maks) {
				maks = x;
				ans1++;
			}
			if (x < mini) {
				mini = x;
				ans2++;
			}
		}
	}
	cout << ans1 << " " << ans2 << '\n';
	return 0;
}