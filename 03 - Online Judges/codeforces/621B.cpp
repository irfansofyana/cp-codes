#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
vector<pair<int,int> > ans[1005];
vector<int> ada;
map<int,int> mep;
bool A[1005][1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n;
	memset(A,false,sizeof A);
	for (i = 0 ; i < n ; i++) {
		int x,y;
		cin >> x >> y;
		x--; y--;
		A[x][y] = true;
		ans[x].push_back(make_pair(x,y));
		mep[x]++;
		if (mep[x]==1) ada.push_back(x);
	}
	int res = 0;
	for (i = 0 ; i < (int)ada.size()-1 ; i++){
		for (j = i+1 ; j < (int)ada.size(); j++){
			int x,y;
			x = ada[i]; y = ada[j];
			for (k = 0 ; k < ans[x].size(); k++){
				int xx,yy;
				xx = ans[x][k].first; yy = ans[x][k].second;
				if (yy+y-x!=yy+x-y) {
					if ((yy+y-x>=0 && yy+y-x < 1000) && A[y][yy+y-x]==true) res++;  
					if ((yy+x-y>=0 && yy+x-y < 1000) && A[y][yy+x-y]==true) res++;
				}
				else {
					if ((yy+x-y>=0 && yy+x-y < 1000) && A[y][yy+x-y]==true) res++;
				}
			}
		}
	} 
	cout << res << '\n';
	return 0;
}