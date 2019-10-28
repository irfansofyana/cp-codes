#include <bits/stdc++.h>
using namespace std;

int t,tc,n,m,i,j;
int arr[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		memset(arr,0,sizeof arr);
		for (i = 0 ; i < n; i++) {
			for (j = 0 ; j < n ; j++) {
				cin >> m;
				arr[m]++;
			}
		}
		bool can = true;
		for (i = 0; i <= 100 ; i++) {
			if (arr[i] > n) {
				can = false;
				break;
			} 
		}
		cout << "Case " << ++tc << ": " << (can ? "yes" : "no") << '\n';
	}
	return 0;
}