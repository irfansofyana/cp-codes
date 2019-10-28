#include <bits/stdc++.h>
#define pb push_back
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j,x,y;
vector<vector<int> > A;
bool visited[5005];

void rekursi(int awal,int x){
	for (i = 0 ; i < A[x].size(); i++) {
		if (!visited[A[x][i]]) {
			visited[A[x][i]] = true;
			A[A[x][i]].pb(awal);
			rekursi(awal,A[x][i]);
		}
	}
}

int main(){
	OPTIMASI
	A.assign(5005,vector<int>());
	cin >> n >> m;
	for (int z = 0 ; z < m ; z++) {
		memset(visited,false,sizeof visited);
		cin >> x >> y;
		A[x].pb(y);
		for (j = 0 ; j < A[x].size(); j++) {
			rekursi(x,A[x][j]);
		}
	}
	return 0;
}