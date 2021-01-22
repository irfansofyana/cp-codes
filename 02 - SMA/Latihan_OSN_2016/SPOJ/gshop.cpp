#include <bits/stdc++.h>
using namespace std;

int t,n,k;
vector<int> arr;
int i,j,x;
bool ganti;
vector<int> semua;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int ans = 0;
		semua.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			semua.push_back(x);
			if (x > 0) {
				ans += x;
			}
			else arr.push_back(x);
		}
		int awal = k;
		if (arr.size()!=0){
			for (i = 0 ; i < arr.size() && k > 0; i++) {
				arr[i] *= -1;
				k--;
			}
			if (k == 0) {
				for (i = 0 ; i < arr.size(); i++){
					ans += arr[i];
				}
			}
			else {
				ans = 0;
				for (i = 0 ; i < semua.size(); i++){
					if (semua[i] <= 0) semua[i] *= -1;
					ans += semua[i];
				}
				sort(semua.begin(),semua.end());
				if (k%2 == 1) {
					ans -= 2*semua[0];
				}
			}
		}
		else {
			ans = 0;
			sort(semua.begin(),semua.end());
			for (i = 0 ; i < semua.size(); i++){
					ans += semua[i];
			}
			if (awal % 2 == 1) {
				ans -= 2*semua[0];
			}
		}
		cout << ans << '\n';
		arr.clear();
	}
	return 0;
}