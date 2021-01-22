#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int arr[1005], brr[1005];
int ans[1005], beda;
bool udah[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	for (i = 0 ; i < n ; i++) cin >> brr[i];
	for (i = 0 ; i < n ; i++) {
		if (arr[i] == brr[i]) {ans[i] = arr[i]; udah[arr[i]] = true;}
		else {
			ans[i] = -1; beda++;
		}
	}
	if (beda == 1) {
		for (i = 0 ; i < n ; i++) {
			if (ans[i] == -1) {
				for (j = 1 ; j <= n ; j++) {
					if (j!= arr[i] && j!= brr[i] && !udah[j]) {
						udah[j] = true;
						ans[i] = j;
						break;
					}
				}
				break;
			}
		}
	}
	else {
		for (i = 0 ; i < n ; i++) {
			if (ans[i] == -1) {
				if (!udah[arr[i]] && !udah[brr[i]]) continue;
				if (!udah[arr[i]]){
					udah[arr[i]] = true;
					ans[i] = arr[i];
				}
				else if (!udah[brr[i]]) {
					udah[brr[i]] = true;
					ans[i] = brr[i];
				}
			}
		}
		for (i = 0 ; i < n ; i++) {
			if (ans[i] == -1) {
				if (!udah[arr[i]]){
					udah[arr[i]] = true;
					ans[i] = arr[i];
				}
				else if (!udah[brr[i]]) {
					udah[brr[i]] = true;
					ans[i] = brr[i];
				}
			}
		}
	}
	for (i = 0 ; i < n ; i++) {
		cout << ans[i];
		cout << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}