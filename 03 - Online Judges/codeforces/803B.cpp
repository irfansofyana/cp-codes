#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, arr[200005];
vector<int> nol;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		if (arr[i] == 0) nol.pb(i);
	}
	for (int i = 0 ; i < n ; i++) {
		if (arr[i] != 0) {
			int kiri,kanan;
			kanan = lower_bound(nol.begin(), nol.end(), i) - nol.begin();
			if (kanan == (int)nol.size()) {
				arr[i] = abs(nol[(int)nol.size()-1] - i);
			}
			else if (kanan == 0) {
				arr[i] = abs(nol[0] - i);
			}
			else {
				int tmp = abs(nol[kanan] - i);
				tmp = min(tmp, abs(nol[kanan-1] - i));
				arr[i] = tmp;
			}
		}
	}
	for (int i = 0 ; i < n ; i++) {
		cout << arr[i];
		cout << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}