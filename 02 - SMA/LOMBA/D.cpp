#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j;
char A[1005][1005];
int awal,akhir,neeed;
vector<pi> ans[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++){
		for (j = 0; j < m ; j++) {
			cin >> A[i][j];
			if (A[i][j]=='0') {
				awal = i;
			}
		}
	}
	for (i = 0 ; i < n ; i++) {
		if (A[i][0]=='-') {akhir = i; neeed = 0; }
		else if (A[i][m-1]=='-') { akhir = i; neeed = m-1;}
	}
	for (i = 0 ; i < m ; i++) {
		if (A[0][i]=='-') {akhir = 0; neeed = i;}
		else if (A[n-1][i]=='-') {akhir = n-1; neeed = i;}
	}
	for (i = 0 ; i < n ; i++) {
		int x = 0;
		for (j = 0 ; j < m ; j++) {
			if (A[i][j]=='-') x++;
		}		
		if (x==1) {
			for (j = 0 ; j < m ; j++) {
				if (A[i][j]=='-') {
					ans[i].push_back(make_pair(i,j));
				}
			}
		}
	}
	//cout << awal << " " << akhir << '\n';
	if (awal<akhir) {
		for (i = awal+1; i <= akhir; i++) {
			if (ans[i].size()!=0) cout << ans[i][0].second+1 << " " << ans[i][0].first+1 << '\n';
		}
	}
	else if (akhir<awal) {
		for (i = awal-1; i >= akhir; i--) {
			if (ans[i].size()!=0) cout << ans[i][0].second+1 << " " << ans[i][0].first+1 << '\n';
		}
	}
	else if (akhir==awal) {
		cout << neeed+1 << " " << akhir+1 << '\n';
	}
	return 0;
}