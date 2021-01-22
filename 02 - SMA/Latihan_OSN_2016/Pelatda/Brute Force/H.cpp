#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int arr[25];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++)
			cin >> arr[i];
		//int sum = 0;
		bool ans = false;
		for (i = 0 ; i < (1 << n); i++){
			int sum = 0;
			for (j = 0 ; j < n ; j++) {
				if ((i&(1<<j)) > 0) sum += arr[j];
			}
			if (sum==m) {
				ans = true;
				break;
			}
		}
		cout << (ans ? "Yes" : "No") << '\n';
	}
	return 0;
}