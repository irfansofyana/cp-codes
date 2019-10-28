#include <bits/stdc++.h>
#define eps 1e-9
#define INF 2E9
using namespace std;

typedef long long ll;

const int maxn = 15;
const int maxm = 500;

int n,A[maxn+5][maxn+5],m,cost;
vector<int> ans;
bool visited[maxn+5];

void jelajah(int x,int y,int z) {
	visited[x] = true;
	cost += A[x][y];
	if (z==n-1) {
		ans.push_back(cost);
		cost -= A[x][y];
	}
	else {
		for (int it=1;it<=n;it++) {
			if (it!=y && !visited[it]) 
				jelajah(y,it,z+1);
		}
	}
}

int main(){
	scanf("%d %d", &n ,&m);
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			scanf("%d", &A[i][j]);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			if (i!=j) {
				cost = 0;
				memset(visited,false,sizeof visited);
				jelajah(i,j,1);
			}
		}
	}
	sort(ans.begin(),ans.end());
	for (int i=0;i<ans.size();i++) 
		printf("%d\n", ans[i]);
	return 0;
}
