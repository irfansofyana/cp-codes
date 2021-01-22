#include <bits/stdc++.h>
using namespace std;

int n,m,k,i,j;
int A[105][105];
int ret[105][105];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

bool cek(int x,int y){
	return ((x>=0 && x<n) && (y>=0 && y <m) );
}

bool comp(pair<int,int> a,pair<int,int> b){
	if (a.second==b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	for (i = 0 ; i < n ; i++)
		for (j = 0 ; j < m ; j++){
			cin >> A[i][j];
		}
	for (i = 0 ; i < n ; i++){
		for (j = 0 ;j < m ; j++) {
			int rt = 1;
			for (int z = 0 ; z < 4 ; z++) {
				if (cek(i+dx[z],j+dy[z])){
					rt *= A[i+dx[z]][j+dy[z]];
				}
			}
			ret[i][j] = rt;
		}
	}
	vector<pair<int,int> > ans;
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < m ; j++){
			if (ret[i][j]==k) ans.push_back(make_pair(i,j));
		}
	}
	if (ans.size()==0) cout << "0 0\n";
	else {
		sort(ans.begin(),ans.end(),comp);
		cout << ans[0].first+1 << " " << ans[0].second + 1 << '\n';
	}
	return 0;
}