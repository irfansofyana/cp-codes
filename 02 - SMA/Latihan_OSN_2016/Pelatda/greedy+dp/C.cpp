#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int t,n,i,j;
pii arr[100005];
int kiri,kanan;

bool comp(pii a,pii b){
	if (a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++)
			cin >> arr[i].first >> arr[i].second;
		sort(arr,arr+n,comp);
		kiri = arr[0].first; kanan = arr[0].second;
		int ans = 1;
		for (i = 1 ; i < n ; i++) {
			if (arr[i].first >= kiri && arr[i].first <= kanan) {
				kiri = max(kiri,arr[i].first);
				kanan = min(kanan,arr[i].second);
			}
			else {
				ans++;
				kiri = arr[i].first; kanan = arr[i].second;
			}
		}
		cout << ans << '\n';
	}
	return 0; 
}