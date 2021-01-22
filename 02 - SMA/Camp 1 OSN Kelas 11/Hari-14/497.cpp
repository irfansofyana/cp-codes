#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j,a,maks,idx;
int A[100005];
int dp[100005];
vector<vector<int> > ans;
string s;
bool pertama,per;

int ubah(string s){
	stringstream ss(s);
	int res;
	return ss >> res?res:0;
}

int main(){
	cin.tie(0); 
	cin >> tc;
	getchar();
	pertama = true;
	while (tc--) {
		if (pertama) {
			getline(cin,s);
			pertama = false;
		}
		i = 0;
		while (getline(cin,s)) {
			if (s.size()==0) break;
			a = ubah(s.substr(0,s.size()));
			//cout << a << endl;
			A[i] = a; i++;
		} n = i;
		//cout << n << endl;
		ans.clear();
		for (i = 0 ; i < n ; i++) dp[i] = 1;
		ans.assign(100005,vector<int>());
		//cout << "aa" << endl;
		for (i = 0 ; i < n ; i++) {
			maks = 0;
			if (i==0) {
				ans[i].push_back(A[i]);
			}
			else {
				per = true; maks = 0; idx = -1;
				for (j = 0 ; j<= i-1 ; j++) {
					if (A[j]<A[i]) {
						if (per) {
							maks = dp[j];
							idx = j;
							per = false;
						}
						else if (dp[j]>maks) {
							maks = dp[j];
							idx = j;
						}
					}
				}
				dp[i] = maks+1;
				if (idx!=-1) 
					for (j = 0 ; j < ans[idx].size() ; j++) 
						ans[i].push_back(ans[idx][j]);
				ans[i].push_back(A[i]);
			}
		}
		maks = -1;
		for (i = 0 ; i < n ; i++) {
			if (dp[i]>maks) {
				maks = dp[i];
				idx = i;
			}
		}
		cout << "Max hits: " << maks << endl;
		//sort(ans[idx].begin(),ans[idx].end());
		for (i = 0 ; i < ans[idx].size() ; i++)
			cout << ans[idx][i] << endl;
		if (tc!=0) cout << endl;
	}
	return 0;
}