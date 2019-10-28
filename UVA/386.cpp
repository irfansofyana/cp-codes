#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int a,b,c;
vector<pair<int,pair<int,int> > > ans[24000005];

void generate(){
	for (i = 2 ; i <= 200; i++) {
		for (j = i ; j <= 200; j++) {
			for (k = j; k <= 200; k++) {
				int x,y,z;
				x = i*i*i; y = j*j*j; z = k*k*k;
				ans[x+y+z].push_back(make_pair(i,make_pair(j,k)));
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
	generate();
 	for (i = 0 ; i <= 200; i++) {
		int x = i*i*i;
		if (ans[x].size()>0){
			for (j = 0 ; j < ans[x].size(); j++) {
				cout << "Cube = " << i << ", Triple = (" << ans[x][j].first << "," << ans[x][j].second.first;
				cout << "," << ans[x][j].second.second<< ")" << '\n';
			}
		}
	}
	return 0;
}