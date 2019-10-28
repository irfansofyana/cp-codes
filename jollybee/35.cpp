#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define pb push_back
using namespace std;

typedef long long ll;
ll n,i,j,idx;
int t;
ll x,ans;
vector<vector<ll> > A;

bool cari(ll depan,ll belakang,ll bil){
	ll tengah = (depan+belakang)/2;
	if (depan>belakang) return false;
	else if (A[idx][tengah]==bil) return true;
	else if (A[idx][tengah]>bil) return cari(tengah+1,belakang,bil);
	else if (A[idx][tengah]<bil) return cari(depan,tengah-1,bil);
}

int main(){
	OPTIMASI
	cin >> t;
	int tc;
	A.assign(1000,vector<ll>());
	while (t--) {
		cin >> n;
		cout << "Kasus " << ++tc << ": " ;
		A.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			if (x==1) A[i].pb(x);
			x/=2;
			while (x!=0) {
				A[i].pb(x);
				x/=2;
			}
		}
		for (i = 0 ; i < A[0].size(); i++) {
			ll temp = A[0][i];
			for (j = i+1; j < n ; j++) {
				idx = j;
				if (!cari(0,A[j].size()-1,temp)) break;
			}
			if (j==n || n==1) {
				ans = temp;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}