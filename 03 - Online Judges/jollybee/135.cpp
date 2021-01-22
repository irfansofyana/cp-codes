#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,m,i,j,r;
ll t,tc,tengah,smt;
ll ans,x,depan,belakang;
vector<ll> A;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m >> r;
		A.clear(); ans = 0;
		for (i = 0 ; i < n ; i ++) {
			cin >> x;
			A.push_back(x);
		}
		sort(A.begin(),A.end());
		while (m<=r) {
			ans++;
			depan = 0; belakang = A.size()-1; smt = -1;
			while (depan<=belakang) {
				tengah = (depan+belakang)/2;
				if (A[tengah]<m) {
					smt = tengah;
					depan = tengah+1;
				}
				else if (A[tengah]>=m) belakang = tengah-1;
			}
			if (smt!=-1) {
				m += A[smt];
				A.erase(A.begin()+smt);
			}
			else break;
		}
		cout << "Kasus #" << ++tc << ": ";
		if (m<=r) cout << "UTS!" ;
		else cout << ans ;
		cout << '\n';
	}
	return 0;
}