#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,m,i,j;
vector<int> V[100005];
int maks,ans,kota;
bool visited[100005];

int dfs(int a) {
 	int maks = 0, sum=0;
 	visited[a] = true;

 	for(int i=0; i<V[a].size(); i++) {
 		int b = V[a][i];
  		if (!visited[b]) {
  			int res = dfs(b);
   			maks = max(maks, res);
   			sum += res;
  		}
 	}
 
	 maks = max(maks, n-1-sum);
	 if (maks == ans) {
	  kota = min(kota, a);
	 } else if (maks < ans) {
	  ans = maks;
	  kota = a;
	 }
	 
	 return sum+1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n-1; i++) {
		int x,y;
		cin >> x >> y;
		V[x].pb(y);
		V[y].pb(x);
	}
	ans = (int)1e9;
	dfs(1);
	cout << kota << " " << 2*ans << '\n';
	return 0;
}