#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,maks;
vector<vector<int> > A;
int temp[2005];

void dfs(int par,int k){
	for (int z = 0 ; z<A[par].size(); z++) {
		dfs(A[par][z],k+1);
	}
	if (k>maks) maks = k;
}

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> n;
	A.assign(2005,vector<int> ());
	for (i = 1; i <= n ; i++) {
		cin >> temp[i];
		if (temp[i]!=-1) A[temp[i]].push_back(i);
	}
	maks = 0;
	for (i = 1 ; i <= n ; i++) {
		if (temp[i]==-1) {	
			dfs(i,1);
		}
	}
	cout << maks << endl;
	return 0;
}