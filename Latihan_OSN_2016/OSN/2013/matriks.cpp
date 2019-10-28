#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

string dummy;
ll nos,n,m,i,j;
ll A[50][50];
ll k;
vector<pair<ll,pair<ll,ll> > > ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy >> nos;
	cin >> n >> m;
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < m ; j++)
			cin >> A[i][j];
	}
	for (i = 0 ; i < m; i++) {
		bool cek = true;
		while (cek) {
			ll maks; bool nol = false;
			for (j = 0 ; j < n ; j++) {
				if (A[j][i]==0) {
					nol = true; break;
				}
			}
			if (nol) {
				ans.push_back(make_pair(1,make_pair(i+1,1)));
				for (j = 0 ; j < n ; j++) A[j][i]++;
			}
			for (j = 0 ; j < n ; j++) {
				if (j==0) maks = A[j][i];
				else maks = max(maks,A[j][i]);
			}
			ll mini = 100000000000;
			for (j = 0; j < n ; j++) {
				if (A[j][i]<maks) {
					ll temp = 1; ll _b = 0;
					while (A[j][i]*temp < maks) {
						temp *= 2; _b++;
					}
					if (A[j][i]*temp > maks) {
						temp /= 2; _b--;
					}
					if (temp > 1) {
						ans.push_back(make_pair(3,make_pair(j+1,_b)));
					//	cout << 3 << " " << j+1 << " " << _b << '\n';
						for (k = 0 ; k < m ; k++) {
							A[j][k] *= temp;
						}
					}
				}
				mini = min(mini,A[j][i]);
			}
			ans.push_back(make_pair(2,make_pair(i+1,mini)));
			//cout << 2 << " " << i+1 << " " << mini << '\n';
			ll cekk = 0;
			for (j = 0 ; j < n ; j++) {
				A[j][i] -= mini;
				if (A[j][i]==0) cekk++;
			}
			if (cekk==n) cek = false;
		}
	}
	cout << ans.size() << '\n';
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i].first << " " << ans[i].second.first << " " << ans[i].second.second << '\n';
	}
	return 0;
}