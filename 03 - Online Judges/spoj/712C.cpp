#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int x,y;
int arr[3];
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x >> y;
	if (2*y-1 >= x) cout << 3 << '\n';
	else {
		arr[0] = arr[1] =x;
		arr[2] = 2*y-1;
		ans = 1;
		while (1) {
			sort(arr,arr+3);
			if (arr[1] - arr[0] + 1 <= y) arr[2] = y;
			else arr[2] = arr[1]-arr[0]+1;
			ans++;
			if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == y) break;
		}
		cout << ans << '\n';
	}
	return 0;
}
