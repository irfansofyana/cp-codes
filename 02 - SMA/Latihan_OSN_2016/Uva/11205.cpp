#include <bits/stdc++.h>
using namespace std;

int t,tc;
int n,p;
int i,j,k,l;
int A[105][20];
map<vector<int>,int> mep;
vector<int> smt;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> p >> n;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < p ; j++){
				cin >> A[i][j];
			}
		}
		int ans = 100000000;
		for (i = 0 ; i < (1<<p); i++){
			bool aktif[20];
			memset(aktif,false,sizeof aktif);
			int frek = 0;
			for (j = 0 ; j < p ; j++) {
				if ( (i&(1<<j)) > 0) {
					aktif[j] = true;
					frek++;
				}
			}
			mep.clear();
			bool _can = true;
			for (j = 0 ; j < n ; j++) {
				smt.clear();
				for (k = 0; k < p ; k++) {
					if (!aktif[k]) {	//kalo gak aktif matiin 
						smt.push_back(0);
					}
					else smt.push_back(A[j][k]);
				}
				if (mep[smt] >= 1) {
					_can = false;
					break;
				}
				else mep[smt]++;
			}
			if (_can) ans = min(ans,frek);
		}
		cout << ans << '\n';
	}
	return 0;
}