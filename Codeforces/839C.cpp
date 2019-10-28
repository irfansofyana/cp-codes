#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()
using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e5;

ll n, anak[MAXN+5];
vector<ll> arr[MAXN+5];
bool visited[MAXN+5];
double ans;

void cari_anak(int node){
	visited[node] = true;
	int x = 0;
	for (int i = 0 ; i < arr[node].size(); i++) {
		if (!visited[arr[node][i]]) {
			x++;
			cari_anak(arr[node][i]);
		}
	}
	anak[node] = x;
}

void hitung(int node,int depth,double peluang){
	visited[node] = true;
	bool ada = false;
	for (int i = 0 ; i < arr[node].size(); i++) {
		if (!visited[arr[node][i]]) {
			ada = true;
			hitung(arr[node][i], depth+1, peluang/(1.0*anak[node]));
		}
	}
	if (!ada) {
		ans += depth*peluang;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n;
	for (int i = 0 ; i < n-1; i++) {
		int x,y;
		cin >> x >> y;
		arr[x].pb(y); arr[y].pb(x);
	}
	cari_anak(1);
	memset(visited, false, sizeof visited);
	hitung(1, 0, 1);
	cout << fixed << showpoint << setprecision(17);
	cout << ans << '\n';
	return 0;
}