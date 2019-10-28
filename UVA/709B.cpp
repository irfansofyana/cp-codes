#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;
const int N = (int)1e5;

int n,a,i,j;
vector<int> kiri,kanan;
ll ans1,ans2;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> a;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		if (j < a) kiri.pb(j);
		else kanan.pb(j);
	}
	sort(kiri.begin(),kiri.end()); sort(kanan.begin(),kanan.end());
	//ans1 = -1; ans2 = -1;
	if (kiri.size() == n) {
		ans1 = a - kiri[(int)kiri.size()-1];
		for (i = (int)kiri.size()-1; i > 1 ; i--) {
			ans1 += kiri[i]-kiri[i-1];
		}
		//cout << ans1 << '\n';
		if ((int)kiri.size() < n-1) {
			ans1 += kanan[0] - kiri[0];
			for (i = 1 ; i < kanan.size()-1; i++) {
				ans1 += kanan[i]-kanan[i-1];
			}
		}
		cout << ans1 << '\n';
	}
	else if (kanan.size() == n) {
		ans2 = kanan[0]-a;
		for (i = 1 ; i < kanan.size()-1; i++) {
			ans2 += kanan[i]-kanan[i-1];
		}
		if ((int)kanan.size() < n-1) {
			ans2 += kanan[(int)kanan.size()-1]-kiri[(int)kiri.size()-1];
			for (i = (int)kiri.size()-1; i >= 2; i--) {
				ans2 += kiri[i]-kiri[i-1];
			}
		}
		cout << ans2 << '\n';
	}
	else {
		if (kiri.size() > 0) {
			ans1 = a - kiri[(int)kiri.size()-1];
			for (i = (int)kiri.size()-1; i > 0 ; i--) {
				ans1 += kiri[i]-kiri[i-1];
			}
			//cout << ans1 << '\n';
			if ((int)kiri.size() < n-1) {
				ans1 += kanan[0] - kiri[0];
				for (i = 1 ; i < kanan.size()-1; i++) {
					ans1 += kanan[i]-kanan[i-1];
				}
			}
		}
		if (kanan.size() > 0) {
			ans2 = kanan[0]-a;
			for (i = 1 ; i < kanan.size(); i++) {
				ans2 += kanan[i]-kanan[i-1];
			}
			if ((int)kanan.size() < n-1) {
				ans2 += kanan[(int)kanan.size()-1]-kiri[(int)kiri.size()-1];
				for (i = (int)kiri.size()-1; i >= 2; i--) {
					ans2 += kiri[i]-kiri[i-1];
				}
			}
		}	
		cout << min(ans1,ans2) << '\n';
	}
	return 0;
}
