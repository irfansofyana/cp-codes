#include <bits/stdc++.h>
#define pb push_back

using namespace std;

const int MAXN = 10000;

int n, m, ans, cnt;
vector<int> arr[MAXN+5];
bool visited[MAXN+5];
int dp[MAXN+5];

void f(int now){
	visited[now] = true;
	cnt++;
	for (int i = 0 ; i < arr[now].size(); i++) {
		if (!visited[arr[now][i]])
			f(arr[now][i]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < m; i++) {
		int x,y;
		cin >> x >> y;
		arr[x].pb(y);
	}
	memset(dp, -1, sizeof dp);
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= n ; j++) 
			visited[j] = false;
		cnt = 0;
		f(i);
		ans = max(ans, cnt);
	}	
	cout << ans << '\n';
	return 0;
}