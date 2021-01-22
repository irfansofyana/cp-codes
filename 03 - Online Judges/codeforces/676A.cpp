#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, arr[105];
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	for (int i = 0 ; i < n ; i++) {
		for (int j = i + 1 ; j < n ; j++) {
			int c = arr[i];
			arr[i] = arr[j];
			arr[j] = c;
			int satu, dua;
			for (int k = 0 ; k < n ; k++) {
				if (arr[k] == 1) {
					satu = k;
					break;
				}
			}	
			for (int k = 0 ; k < n ; k++) {
				if (arr[k] == n) {
					dua = k;
					break;
				}
			}
			if (abs(satu - dua) > ans) ans = abs(satu - dua);
			c = arr[i];
			arr[i] = arr[j];
			arr[j] = c;
		}
	}
	cout << ans << '\n';
	return 0;
}