#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef long long LL;

const int MAXN = 1e5;

int N, M;
vector<LL> bil[MAXN+5];
LL sum[MAXN+5], jum;
pair<int,LL> arr[MAXN+5];
string dummy;

bool cmp(pair<int,LL> a, pair<int,LL> b){
	return a.se < b.se;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> N >> M;
	for (int i = 0; i < N; i++){
		cin >> arr[i].fi >> arr[i].se;
		bil[arr[i].fi].emplace_back(arr[i].se);
		sum[arr[i].fi] += arr[i].se;
		jum += arr[i].se;
	}
	for (int i = 1; i <= M; i++){
		sort(bil[i].begin(), bil[i].end());
	}
	sort(arr, arr + N, cmp);
	LL ans = 0;
	for (int i = 0; i < N-1; i++){
		jum -= arr[i].se;
		ans += (jum - 1LL * arr[i].se * (N-1-i));
	}
	for (int i = 1; i <= M; i++){
		int sz = bil[i].size();
		for (int j = 0; j < sz-1; j++){
			sum[i] -= bil[i][j];
			LL tmp = (sum[i] - 1LL * bil[i][j] * (sz-1-j));
			ans -= tmp;
		}
	}
	cout << ans << '\n';
	return 0;
}