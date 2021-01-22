#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int n, mulai;
string s;
vector<int> arr[55];

bool bisa(int x){
	for (int z = 0 ; z < 52 ; z++) {
		if (arr[z].size() > 0) {
			int tmp = upper_bound(arr[z].begin(),arr[z].end(), x) - arr[z].begin();
			tmp--;
			if (!(tmp >= 0 && tmp < arr[z].size())) return false;
			if (arr[z][tmp] < mulai) return false;	
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	for (int i = 0 ; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') arr[(int)s[i]-'a'].pb(i);
		else if (s[i] >= 'A' && s[i] <= 'Z') arr[(int)s[i]-'A' + 26].pb(i);
	}
	int res = (int)1e9;
	for (int i = 0 ; i < n; i++) {
		int kiri = i, kanan = n-1;
		int ans = -1;
		mulai = i;
		while (kiri <= kanan) {
			int tengah = (kiri + kanan)/2;
			if (bisa(tengah)) {
				//cout << "aa " << tengah << " ";
				ans = tengah;
				kanan = tengah-1;
			}
			else kiri = tengah + 1;
		}
		//cout << "ans " << ans << '\n';
		//cout << '\n';
		if (ans != -1) res = min(res , ans - i + 1);
	}
	cout << res << '\n';
	return 0;
}
