#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,maks;
int arr[20005];
int mulai,akhir;
int tc;
vector<pair<int,int> > ans;

bool comp(pair<int,int> a,pair<int,int> b){
	if (a.second - a.first == b.second - b.first) {
		return a.first < b.first;
	}
	return a.second - a.first > b.second - b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		ans.clear();
		for (i = 1 ; i <= n-1 ; i++) cin >> arr[i];
		int tmp = 0;
		maks = 0;
		for (i = 1 ; i <= n-1 ; i++) {
			tmp += arr[i];
			if (tmp < 0) tmp = 0;
			maks = max(maks,tmp);
		}
		if (maks > 0) {
			tmp = 0;
			mulai = 1;
			for (i = 1 ; i <= n-1; i++) {
				tmp += arr[i];
				if (tmp == maks) {
					akhir = i;
					ans.push_back({mulai,akhir});
				}
				if (tmp < 0) {
					tmp = 0;
					mulai = i+1;
				}
			}
			sort(ans.begin(),ans.end(),comp)	;
			cout << "The nicest part of route " << ++tc << " is between stops " << ans[0].first << " and " << ans[0].second + 1 << '\n';
		}
		else cout << "Route " << ++tc << " has no nice parts\n";
	}
	return 0;
}