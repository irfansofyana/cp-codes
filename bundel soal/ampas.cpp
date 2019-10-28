#include <bits/stdc++.h>
using namespace std;

vector <vector<pair<int, int> > > v;
int n,i,j,a,b,p;
int ans;
int dfs(int x,int y,int sum) {
	int maks=sum;
	
	for (int z=0;z<v[y].size;z++) {
		
	}
	return maks;
}
int main(){
	cin >> n;
	v.assign(n+1, vector< pair<int,int> > ());
	for (i=0;i<n;i++){
		cin >> a >> b >> p;
		v[a].push_back(make_pair(b,p));
		v[b].push_back(make_pair(a,p));
	}
	for (i=0;i<v[0].size();i++){
		if (dfs(0,v[0][i].first,v[0][i].second)>ans) ans=dfs(0,v[0][i].first,v[0][i].second);
	}
	cout << ans << endl;
}
