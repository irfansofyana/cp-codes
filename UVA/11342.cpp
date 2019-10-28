#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int tc;
bool bisa[50005];
vector< pair<int, pair<int,int> > > ans[50005];

void generate(){
	memset(bisa,false,sizeof bisa);
	for (i = 0 ; i <= 223; i++) {
		for (j = i; j<=223; j++) {
			for (k = j ; k <= 223; k++) {
				int x,y,z;
				x = i*i; y = j*j ; z = k*k;
				if (x+y+z>50000) break;
				else {
					ans[x+y+z].push_back(make_pair(i,make_pair(j,k)));
					bisa[x+y+z] = true;
				}
			} 
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> tc;
	while (tc--) {
		cin >> n;
		if (!bisa[n]) cout << -1 << '\n';
		else {
			for (i = 0 ; i < ans[n].size(); i++) {
				cout << ans[n][i].first << " " << ans[n][i].second.first << " " << ans[n][i].second.second << '\n';
				break;
			}
		}
	}
	return 0;
}