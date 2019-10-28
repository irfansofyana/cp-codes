#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n;
int arr[500];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie();
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	int ans = (int)1e9;
	for (int i = 0 ; i < n ; i++) {
		//depan
		int sum = arr[i];
		int j = (i+1)%n;
		ans = min(ans, abs(360-sum - sum));
		while (j != i) {
			sum += arr[j];
			ans = min(ans, abs(360-2*sum));
			j++; j%=n;
		}
		sum = arr[i];
		j = (i == 0 ? n-1 : i-1);
		while (j != i) {
			sum += arr[j];
			ans = min(ans, abs(360-2*sum));
			if (j < 0) j = n-1;
			else j--;
		}
	}
	cout << ans << '\n';
	return 0;
}