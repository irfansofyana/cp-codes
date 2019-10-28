#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int arr[10005];


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n && n > 0) {
		for (i = 0 ; i < n ; i++) cin >> arr[i];
		int tot = 0;
		int ans = -1;
		for (i = 0 ; i < n; i++) {
			tot += arr[i];
			if (tot <= 0) tot = 0;
			else {
				ans = max(ans,tot);
			}
		}
		if (ans==-1) cout << "Losing streak.\n";
		else cout << "The maximum winning streak is " << ans << ".\n";
	}
	return 0;
}