#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, i, j;
int arr[100005];
int bil, ans, move[100005], ada[100005];
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
			while (j > 1) {
				j /= 2;
				langkah++;
				move[j] += langkah;
				ada[j]++;
			}
		}
		int ans = (int)1e9;
		for (i = 1; i <= 100000; i++) {
			if (ada[i] == n) ans = min(ans, move[i]); 
		}
		cout << ans << '\n';
	}
	else {
		int tot = 0;
		for (i = 0 ; i < n ; i++) tot += pangkat[i];
		tot /= n;
		for (i = 0 ; i < n ; i++) ans += abs(pangkat[i] - tot);
		cout << ans << '\n';
	}
	return 0;
}