#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int t, n, m;
int arr[1005];
int pertama;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> t;
	while (t--) {
		cin >> n >> m;
		pertama = -1;
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i];
			if (arr[i] != -1 && pertama == -1) {
				pertama = i;
			}
		}
		for (int i = pertama+1; i < n; i++) {
			arr[i] = (arr[i-1]+1)%m;
		}
		for (int i = pertama-1; i >= 0 ; i--) {
			arr[i] = (arr[i+1] == 0 ? m-1 : arr[i+1]-1);
		}
		for (int i = 0 ; i < n ; i++) {
			cout << arr[i];
			cout << (i == n-1 ? '\n' : ' ');
		}
	}
	return 0;
}