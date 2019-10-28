#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int frek;
vector<int> temp;
vector<vector<int> > ans;

bool comp(vector<int> a,vector<int> b) {
	return a<b;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin >> n >> k;
	ans.assign(100,vector<int> ());
	for (i = 0 ; i < (1<<n) ; i++) {
		frek = 0; temp.clear();
		for (j = 0 ; j < n ; j++) {
			if ((i&(1<<j))!=0) {
				frek++;
				temp.push_back(j+1);
			}
		}
		if (frek==k) ans.push_back(temp);
	}
	sort(ans.begin(),ans.end(),comp);
	for (i = 0 ; i < ans.size() ; i++) {
		for (j = 0 ; j < ans[i].size() ; j++) {
			cout << ans[i][j];
			if (j!=ans[i].size()-1) cout << " ";
			else cout << endl;
		}
	}
	return 0;
}