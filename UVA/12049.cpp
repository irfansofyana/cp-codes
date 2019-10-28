#include <bits/stdc++.h>
#define OPTIMASI 
using namespace std;

const int MAXX = (int)1e4;

int t,n,m,i,j,tmp;
int arrn[MAXX + 5],arrm[MAXX + 5];
map<int,int> mepn,mepm;
int freqn,freqm;

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> t;
	while (t--) {
		cin >> n >> m;
		freqn = freqm = 0;
		mepn.clear(); mepm.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> tmp;
			mepn[tmp]++;
			if (mepn[tmp] == 1) 
				arrn[freqn++] = tmp;
		}
		for (i = 0; i < m ; i++) {
			cin >> tmp;
			mepm[tmp]++;
			if (mepm[tmp] == 1) 
				arrm[freqm++] = tmp;
		}
		int ans = 0, smt = 0;
		for (i = 0 ; i < freqn; i++) {
			if (mepm[arrn[i]] > 0) {
				smt += mepm[arrn[i]];
				ans += max(mepn[arrn[i]],mepm[arrn[i]])-min(mepn[arrn[i]],mepm[arrn[i]]);
			}
			else ans += mepn[arrn[i]];
		}
		ans += m-smt;
		cout << ans << '\n';
	}
	return 0;
}