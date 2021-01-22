#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
char A[200][200];
int ans[200][200];
vector<pair<int,int> > nol;
vector<pair<int,int> > satu;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++){
			for (j = 0 ; j < m ; j++){
				cin >> A[i][j];
				ans[i][j] = 1000000000;
				if (A[i][j]=='0') {
					nol.push_back(make_pair(i,j));
				}
				else {
					satu.push_back(make_pair(i,j));
				}
			}
		}
		for (i = 0 ; i < nol.size(); i++) {
			int x,y;
			x = nol[i].first;
			y = nol[i].second;
			for (j = 0 ; j < satu.size() ; j++) {
				int a,b;
				a = satu[j].first; b = satu[j].second;
				ans[x][y] = min(ans[x][y],abs(x-a)+ abs(y-b));
			}
		}
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++) {
				if (A[i][j]== '1') cout << 0;
				else cout << ans[i][j];
				cout << (j==m-1?'\n':' ');
			}
		}
	}
	return 0;
}