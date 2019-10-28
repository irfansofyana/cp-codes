#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
int x,y;
vector<pair<int,int> > ans;

int main(){
	cin >> x >> y >> a >> b >> c >> d;
	ans.push_back(make_pair(b+c,max(a,d)));
	ans.push_back(make_pair(b+d,max(a,c)));
	ans.push_back(make_pair(a+c,max(b,d)));
	ans.push_back(make_pair(a+d,max(b,c)));
	ans.push_back(make_pair(a+c,b+d));
	ans.push_back(make_pair(a+d,b+c));
	ans.push_back(make_pair(b+c,a+d));
	ans.push_back(make_pair(b+d,a+c));
	ans.push_back(make_pair(max(a,d),b+c));
	ans.push_back(make_pair(max(a,c),b+d));
	ans.push_back(make_pair(max(b,d),a+c));
	ans.push_back(make_pair(max(b,c),a+d));
	for (int i = 0 ; i < ans.size() ; i++) {
		if (ans[i].first<=x && ans[i].second<=y) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}