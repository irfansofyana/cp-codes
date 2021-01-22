#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j;
map<pi,int> mep;
vector<pi> frek;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n, n > 0	) {
		mep.clear(); frek.clear();
		for (i = 0 ; i < n ; i++) {
			int x,y;
			cin >> x >> y;
			if (mep[make_pair(min(x,y),max(x,y))]==0) frek.push_back(make_pair(min(x,y),max(x,y)));
			mep[make_pair(x,y)] ++;
		}
		bool ans = true;
		for (i = 0 ; i < frek.size(); i++){
			if (mep[make_pair(frek[i].first,frek[i].second)]!=mep[make_pair(frek[i].second,frek[i].first)]) {
				ans = false;
				break;
			}
		}
		cout << (ans ? "YES" : "NO") << '\n';
	}
	return 0;
}