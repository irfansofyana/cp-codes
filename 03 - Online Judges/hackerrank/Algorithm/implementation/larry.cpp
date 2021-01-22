#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int arr[1005];
int pos;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= n ; i++) cin >> arr[i];
		bool jaw = true;
		for (i = 1 ; i <= n ; i++) {
			if (arr[i] == i) continue;
			if (i == n-1 && arr[i] != n-1) {
				jaw = false;
				break;
			}
			for (j = 1 ; j <= n ; j++) {
				if (arr[j] == i) {
					pos = j;
					break;
				}
			}
			j = pos;
			int a,b,c;
			while (j != i + 1) {
				a = arr[j-2];
				b = arr[j-1];
				c = arr[j];
				arr[j-2] = b; arr[j-1] = c; arr[j] = a;
				j--;
			}
			a = arr[j-1];
			b = arr[j];
			c = arr[j+1];
			arr[j-1] = b;
			arr[j] = c;
			arr[j+1] = a;
		}
		cout << (jaw ? "YES" : "NO") << '\n';
	}
	return 0;
}