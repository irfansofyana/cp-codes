#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,t,i,j;
pi A[100005];

bool comp(pi a,pi b){
	if (a.second==b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++){
			int x,y;
			cin >> x >> y;
			A[i] = make_pair(x,y);
		}
		int ans,akhir;	
		sort(A,A+n,comp);
		ans = 1; akhir = A[0].second;
		for (i = 1 ; i < n ; i++) {
			if (A[i].first>=akhir) {
				ans++;
				akhir = A[i].second;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}