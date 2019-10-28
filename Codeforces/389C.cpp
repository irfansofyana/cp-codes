#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int n, freq[105];
int curr[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int tmp;
		cin >> tmp; 
		freq[tmp]++;
	}
	int ans = 1;
	for (int i = 0 ; i <= 100; i++) {
		if (freq[i] == 0) continue;
		int byk = freq[i];
		int idx = 1;
		while (byk > 0) {
			int bisa_masuk = i - curr[idx] + 1;
			if (bisa_masuk < 0) {
				if (byk > 0) {
					idx++;
					if (idx > ans) ans++;
				}
			}
			else {
				int masukin = min(bisa_masuk, byk);
				byk -= masukin;
				curr[idx] += masukin;
				if (byk > 0) {
					idx++;
					if (idx > ans) ans++;
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}