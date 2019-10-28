#include <bits/stdc++.h>
using namespace std;

int n,s,i,j,x,y;
char c;
int sell[100005],buy[100005];
vector<pair<int,int> > ans1,ans2;
int sa,sb;

bool comp(pair<int,int> a, pair<int,int> b) {
	return a.first<b.first;
}

int main(){
	cin.tie(0);
	cin >> n >> s;
	for (i = 0 ; i < n ; i++) {
		cin >> c >> x >> y;
		if (c=='S') {
			sell[x] += y;
		}
		else {
			buy[x] += y;
		}
	}
	for (i = 0 ; i <= 100000 ; i++) {
		if (sell[i]!=0) {
			ans1.push_back(make_pair(i,sell[i]));
		}
		if (buy[i]!=0) {
			ans2.push_back(make_pair(i,buy[i]));
		}
	}
	sort(ans1.begin(),ans1.end(),comp); sort(ans2.begin(),ans2.end(),comp);
	j = ans1.size();
	for (i = 0 ; i<min(j,s) ; i++) {
		cout << 'S' << " " << ans1[j-1-i].first << " " << ans1[j-1-i].second << endl;
	}
	j = ans2.size();
	for (i = 0 ; i<min(j,s) ; i++) {
		cout << 'B' << " " << ans2[j-1-i].first << " " << ans2[j-1-i].second << endl;
	}
	return 0;
}