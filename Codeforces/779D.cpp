#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string t, p;
int arr[200005], brr[200005];
int n, m, ans;

bool can(int x){
	int idx = 0;
	for (int i = x+1; i < n; i++) brr[idx++] = arr[i]-1;
	sort(brr, brr+idx);
	int ud = 0;
	for (int i = 0 ; i < idx; i++) {
		if (t[brr[i]] == p[ud]) {
			ud++;
		}
		if (ud == m) return true; 
	} 
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t >> p;
	n = (int)t.size();
	m = (int)p.size();
	for (int i = 0 ; i <  n; i++) cin >> arr[i]; 
	int lo = 0, hi = n-2;
	while (lo <= hi) {
		int mid = (lo + hi) >> 1;
		if (can(mid)) {
			//cout << "aaa\n";
			ans = mid+1;
			lo = mid + 1;
		}
		else hi = mid-1;
	}
	cout << ans << '\n';
	return 0;
}