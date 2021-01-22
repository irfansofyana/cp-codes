#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
using namespace std;


typedef long long ll;
typedef pair<ll,ll> pi;
ll n,b,i,j;
queue<pi> antrian;
ll ans[200005];
pi arr[200005];
ll ukuran,current;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> b;
	for (i = 0 ; i < n ; i++) 
		cin >> arr[i].fi >> arr[i].se;
	antrian.push(mp(0,arr[0].fi+arr[0].se));
	ukuran = 1;
	current = arr[0].fi + arr[0].se;
	for (i = 1 ; i < n ; i++) {
		if (ukuran-1 < b) {
			antrian.push(mp(i,max(current,arr[i].fi) + arr[i].se));
			current = max(current,arr[i].fi) + arr[i].se;
			ukuran++;
		}
		else {
			int tmp = antrian.front().se;
			if (arr[i].fi >= tmp) {
				ans[antrian.front().fi] = antrian.front().se;
				antrian.pop(); ukuran--;
				antrian.push(mp(i,max(current,arr[i].fi) + arr[i].se));
				current = max(current,arr[i].fi) + arr[i].se;
				ukuran++;
			}
			else ans[i] = -1;
		}
	}
	while (!antrian.empty()){
		ans[antrian.front().fi] = antrian.front().se;
		antrian.pop();
	}
	for (i = 0 ; i < n ; i++) {
		cout << ans[i] ;
		cout << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}