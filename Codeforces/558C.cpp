#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, i, j;
int arr[100005];
int bil, ans, moved[100005], ada[100005];
int pangkat[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr, arr + n);
	for (i = 0 ; i < n ; i++) {
		j = arr[i];
		int power = 0;
		while (j%2 == 0){
			 power++;
			 j/=2;
		}
		pangkat[i] = power;
		if (i == 0) bil = j;
		else if (j != bil) {
			bil = -1;
			break;
		}
	}
	if (bil == -1) {
		for (i = 0 ; i < n ; i++) {
			j = arr[i];
			int langkah = 0;
			ada[j]++;
			while (j > 1) {
				j /= 2;
				langkah++;
				moved[j] += langkah;
				ada[j]++;
			}
		}
		int ans = (int)1e9;
		for (i = 1; i <= 100000; i++) {
			if (ada[i] == n) ans = min(ans, moved[i]); 
		}
		cout << ans << '\n';
	}
	else {
		int maks = 0;
		for (i = 0; i < n ; i++) {
			maks = max(maks, pangkat[i]);
		}
		int ans = (int)1e9;
		for (i = 0 ; i <= maks ; i++) {
			int cost = 0;
			for (j = 0 ; j < n ; j++) {
				cost += abs(pangkat[j] - i);
			}
			ans = min(ans, cost);
		}
		cout << ans << '\n';
	}
	return 0;
}