#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
vector<pair<int,int> > ans;
int x;

bool comp(pair<int,int> a, pair<int,int> b){
	if (a.second==b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n; i++){
		string s;
		cin >> s;
		int x = 0;
		for (j = 0 ; j < s.size(); j++) {
			(s[j]=='.') ? x += 1 : x+=2;
		}
		ans.push_back(make_pair(i+1,x));
	}
	sort(ans.begin(),ans.end(),comp);
	i = 0;
	//for (i = 0 ; i < ans.size(); i++){
		//cout << ans[i].first << " " << ans[i].second << '\n';
	//}
	while (i<ans.size()) {
		j = i+1;
		if (ans[i].first==m) {
			cout << m << '\n'; return 0;
		}
		else {
			while (ans[j].second==ans[i].second && j < ans.size()) {
				if (ans[j].first==m) {
					cout << m << '\n'; return 0;
				}
				j++;
			}
		}
		cout << ans[0].first << '\n';
		return 0;
	}
	return 0;
}