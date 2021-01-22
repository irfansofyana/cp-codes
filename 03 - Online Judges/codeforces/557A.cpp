#include <bits/stdc++.h>
using namespace std;

int n,i,j;
pair<int,int> A[4];
int mini,maks;
vector<int> ans;

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<3;i++) {
		int x,y;
		cin >> x >> y;
		A[i] = make_pair(x,y);
		mini+=x; maks+=y;
	}
	if (n==mini || n==maks) {
		if (n==mini) {
			for (i=0;i<3;i++){
				if (i==2) cout << A[i].first << endl;
				else cout << A[i].first <<" "; 
			}
		}
		else {
			for (i=0;i<3;i++){
				if (i==2) cout << A[i].second << endl;
				else cout << A[i].second <<" "; 
			}
		}
	}
	else {
		for (i=0;i<3;i++) {
			mini -= A[i].first;
			j = A[i].first;
			while (mini+j<=n && j<=A[i].second) j++;
			mini += j-1;
			ans.push_back(j-1);
		}
		for (i=0;i<3;i++) {
			if (i==2) cout << ans[i] << endl;
			else cout << ans[i] << " ";
		}
	}
}
