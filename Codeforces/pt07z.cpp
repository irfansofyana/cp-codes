#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

const int MAXN = (int)1e4;

int n;
vector<int> arr[MAXN+5];
bool visited[MAXN+5];

int dfs(int node){
	visited[node] = true;
	int maks1 = 0;
	int maks2 = 0;
	for (int i = 0 ; i < arr[node].size();i++) {
		int next = arr[node][i];
		if (!visited[next]) {
			int nilai = dfs(next);
			if (nilai > maks1) {
				maks2 = maks1;
				maks1 = nilai;
			}
			else if (nilai > maks2) {
				maks2 = nilai;
			}
		}
	}
	if (node == 1) return maks1+maks2;
	return maks1+1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n-1 ; i++) {
		int x,y;
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
	}
	cout << dfs(1) << '\n';
	return 0;
}