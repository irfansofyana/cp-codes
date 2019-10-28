#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,m,i,j,x,y,k,t;
ll awal,akhir,diameter;
double ans;
vector<pll> arr;

bool comp(pll a,pll b){
	if (a.fi == b.fi) return a.se < b.se;
	return a.fi < b.fi;
}

double cross(pll a,pll b,pll c){
	return (b.fi - a.fi)*(c.se - a.se) - (b.se - a.se)*(c.fi - a.fi);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> awal >> akhir >> n >> diameter;
	arr.pb({awal,0});
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y;
		ll tx = x - diameter/2;
		arr.pb({tx,y});
		tx = x + diameter/2;
		arr.pb({tx,y});
	}
	arr.pb({akhir,0});
	
	vector<pll> cari(2*n+4);
	sort(arr.begin(),arr.end(),comp);
	m = (ll)arr.size(); k = 0;
	
	for (i = 0 ; i < m; i++) {
		while (k >= 2 && cross(cari[k-2],cari[k-1],arr[i]) <= 0) k--;
		cari[k++] = arr[i];
	}
	for (i = m-2, t = k+1; i >= 0; i--) {
		while (k >= t && cross(cari[k-2],cari[k-1],arr[i]) <= 0) k--;
		cari[k++] = arr[i];
	}
	cari.resize(k-1);
	sort(cari.begin(),cari.end(),comp);
	for (i = 1 ; i < cari.size(); i++){
		ans += hypot(cari[i].fi-cari[i-1].fi,cari[i].se-cari[i-1].se);
	}
	cout << fixed << showpoint << setprecision(3);
	cout << ans << '\n';
	return 0;
}