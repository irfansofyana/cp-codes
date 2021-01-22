#include <bits/stdc++.h>
using namespace std;

int n,i,j,m,TC;
int A[1010];
vector<int> ans;
vector<pair<int,int > > keluar;
int mini,x,jaw;

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		ans.clear(); keluar.clear();
		for (i = 0 ; i < n ; i++) cin >> A[i];
		for (i = 0 ; i < n ; i++) {
			for (j = i+1 ; j < n ; j++) 
				ans.push_back(A[i]+A[j]);
		}
		cin >> m;
		for (i = 0 ; i < m ; i++) {
			cin >> x;
			for (j = 0 ; j < ans.size() ; j++) {
				if (j == 0) {
					mini = abs(x-ans[j]);
					jaw = 0;
				}
				else if (abs(x-ans[j]) < mini) {
					mini = abs(x-ans[j]);
					jaw = j;
				}
			}
			keluar.push_back(make_pair(x,jaw));
		}
		cout << "Case " << ++TC << ':' << endl;
		for (i = 0 ; i < keluar.size() ; i++) {
			cout << "Closest sum to " << keluar[i].first << " is " << ans[keluar[i].second] << '.' << endl;
		}
	}
	return 0;
}