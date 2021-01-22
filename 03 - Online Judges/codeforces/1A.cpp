#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,m,i,j,p,q;
string dummy;
ll arr[55][55];
vector<ll> ans;
ll dx[] = {0,0,-1,1};
ll dy[] = {1,-1,0,0};
bool visited[55][55];

bool cek(ll x,ll y) {
	return (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y]);
}

void dfs(ll x,ll y, ll uang){		//
	if (x == n-1 && y == m-1) {
		ans.pb(uang + arr[x][y]);
	}
	else {
		visited[x][y] = true;
		for (ll z = 0 ; z < 4; z++) {
			if (cek(x + dx[z], y + dy[z])) 
				dfs(x + dx[z], y + dy[z], uang + arr[x][y]);
		}
		visited[x][y] = false;
	}
}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < m ; j++) {
			cin >> arr[i][j];
		}
	}
	dfs(0,0,0);
	//for (int z = 0;  z < ans.size(); z++) {
	//	cout << ans[z] << '\n';
	//}
	sort(ans.begin(),ans.end());
	
	int k;
	cin >> k;
	while (k--) {
		cin >> p >> q;
		ll lo = lower_bound(ans.begin(),ans.end(),p) - ans.begin();
		ll hi = upper_bound(ans.begin(),ans.end(),q) - ans.begin();
		hi--;
		cout << hi-lo+1 << '\n';
	}
	return 0;
}