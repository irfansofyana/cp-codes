#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)1e6;

int n, ans[MAXN], arr[1005], idx;
bool ada[MAXN+5];

int gcd(int x,int y){
	return (y == 0 ? x : gcd(y,x%y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int fpb;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		ada[arr[i]] = true;
		if (i == 0) fpb = arr[i];
		else fpb = gcd(arr[i], fpb);
	}
	if (!ada[fpb]) {
		cout << -1 << '\n';
		return 0;
	}
	else {
		for (int i = 0 ; i < n ; i++) {
			if (i == 0) {
				ans[idx++] = arr[i];
			}
			else {
				int tmp = arr[i];
				int pos = -1;
				for (int j = idx-1; j >= 0; j--) {
					tmp = gcd(tmp, ans[j]);
					if (!ada[tmp]) {
						pos = j;
						break;
					}
				}
				if (pos == -1) {
					ans[idx++] = arr[i];
					continue;
				}
				for (int j = idx-1; j >= pos+1; j--) {
					ans[j+1] = ans[j];
				}
				ans[pos+1] = fpb;
				idx++;
				ans[idx++] = arr[i];
			}
		}
	}	
	cout << idx << '\n';
	for (int i = 0 ; i < idx; i++) {
		cout << ans[i];
		cout << (i == idx - 1 ? '\n' : ' ');
	}
	return 0;
}