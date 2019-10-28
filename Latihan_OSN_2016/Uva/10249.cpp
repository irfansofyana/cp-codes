#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j;
pi kamar[105];
int x,y;
pi tim[105];
vector<int> ans[105];

bool comp(pi a,pi b){
	return a.second > b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n >> m) {
		if (n==0 && m==0) return 0;
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			tim[i] = mp(i,x);
		}
		for (i = 0 ; i < m ; i++) {
			cin >> x;
			kamar[i] = mp(i,x);
		}
		sort(tim,tim+n,comp); sort(kamar,kamar+m,comp);
		bool bisa = true;
		for (i = 0 ; i < n ; i++) {
			int udah = 0;
			vector<int> smt;
			for (j = 0 ; j < m ; j++) {
				if (kamar[j].second > 0) {
					udah++;
					smt.push_back(kamar[j].first);
					kamar[j].second--;
				}
				if (udah==tim[i].second) break;
			}
			if (udah!=tim[i].second) {
				bisa = false; break;
			}
			else {
				ans[tim[i].first] = smt;
			}
		}
		if (bisa) {
			cout << 1 << '\n';
			for (i = 0 ; i < n ; i++) {
				for (j = 0 ; j < ans[i].size(); j++){
					cout << ans[i][j] + 1;
					cout << (j==(int)ans[i].size()-1 ? '\n' : ' ');
				} 
			}
		}
		else cout << 0 << '\n';
	}
	return 0;
}