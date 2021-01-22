#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = 100000;
typedef long long ll;


int n, arr[MAXN + 5], idx, acuan;
bool visit[MAXN+5];
ll ans, jaw[MAXN+5], tmp;

void dfs(int now){
	visit[now] = true;
	if (!visit[arr[now]]) {
		tmp++;
		dfs(arr[now]);
	}
	if (now == acuan) {
		jaw[idx++] = tmp;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n ; i++) cin >> arr[i];
	memset(visit, false, sizeof visit);
	for (int i = 1; i <= n ; i++) {
		if (!visit[i]) {
			tmp = 1;
			acuan = i;
			dfs(i);
		}
	}
	sort(jaw, jaw + idx);
	if (idx == 1) ans = jaw[0]*jaw[0];
	else if (idx == 2) ans = (jaw[0] + jaw[1])*(jaw[0] + jaw[1]);
	else {
		ans += (jaw[idx-1] + jaw[idx-2])*(jaw[idx-1] + jaw[idx-2]);
		for (int i = idx-3; i >= 0 ; i--) ans += jaw[i]*jaw[i];
	}
	cout << ans << '\n';
	return 0;
}