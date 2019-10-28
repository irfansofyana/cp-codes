#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;
vector<int> arr[30];
int ans;

bool cek(int x){
	int idx = 0;
	for (int i = 0 ; i < 26; i++) {
		idx = 0; int j = 0;
		while (idx < s.size() &&  idx + x-1 <s.size() && j < arr[i].size()) {
			while (arr[i][j] < idx) j++;
			if (arr[i][j] >= idx && arr[i][j] <= idx+x-1) {
				idx++;
			}
			else break;
		}
		if (idx >= s.size() || idx+x-1 >= s.size()) {
			return true;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (int i = 0 ; i < s.size(); i++) {
		arr[(int)s[i]-'a'].pb(i);
	}
	int i = 1; int j = (int)s.size();
	while(i<=j) {
		int mid = (i+j)/2;
		if (cek(mid)) {
			ans = mid;
			j = mid - 1;
		}
		else i = mid+1;
	}
	cout << ans << '\n';
	return 0;
}