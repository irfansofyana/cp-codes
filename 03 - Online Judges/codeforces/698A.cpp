#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
int arr[105];
int dp[105][2][2];
	
int cari(int idx,int sport,int coding){
	if (idx == n) return 0;
	if (dp[idx][sport][coding]!= -1) return dp[idx][sport][coding];
	if (idx == 0) {
		if (arr[idx] == 0) {
			return dp[idx][sport][coding] = 1 + cari(idx + 1, 0, 0);
		}
		else if (arr[idx] == 1) {
			return dp[idx][sport][coding] = min(1 + cari(idx + 1, 0, 0), cari(idx + 1, 0, 1));
		}
		else if (arr[idx] == 2) {
			return dp[idx][sport][coding] = min(1 + cari(idx + 1, 0, 0), cari(idx + 1, 1, 0));
		}
		else {
			int t1 = cari(idx + 1, 0, 0) + 1;
			int mini = t1;
			int t2 = cari(idx + 1, 1, 0);
			mini = min(mini, t2);
			int t3 = cari(idx + 1, 0, 1);
			mini = min(mini, t3);
			int t4 = cari(idx + 1, 1, 1);
			mini = min(mini, t4);
			return dp[idx][sport][coding] = mini; 
		}
	}
	else {
		if (arr[idx] == 0) {
			return dp[idx][sport][coding] = cari(idx + 1, 0, 0) + 1;
		}
		else if (arr[idx] == 1) {
			if (coding == 1) return dp[idx][sport][coding] = cari(idx + 1, 0, 0) + 1;
			else return dp[idx][sport][coding] = min(1 + cari(idx + 1, 0 ,0), cari(idx + 1, 0, 1) );
		}
		else if (arr[idx] == 2) {
			if (sport == 1) return dp[idx][sport][coding] = cari(idx + 1, 0, 0) + 1;
			else return dp[idx][sport][coding] = min(1 + cari(idx + 1, 0, 0), cari(idx + 1, 1, 0) );
		}
		else {
			int t1,t2,t3,t4;
			int mini = cari(idx + 1, 0, 0) + 1;
			if (coding == 0 && sport == 0) {
				t1 = cari(idx + 1, 1, 0);
				mini = min(mini, t1);
				t2 = cari(idx + 1, 0, 1);
				mini = min(mini, t2);
				t3 = cari(idx + 1, 1, 1);
				mini = min(mini, t3);
			}
			else if (coding == 0 && sport == 1) {
				t1 = cari(idx + 1, 0, 1);
				mini = min(mini, t1);
			}
			else if (sport == 0 && coding == 1) {
				t1 = cari(idx + 1, 1, 0);
				mini = min(mini, t1);
			}
			else if (sport == 1 && coding == 1) {
			}
			return dp[idx][sport][coding] = mini;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) 
		cin >> arr[i];
	memset(dp, -1, sizeof dp);
	cout << cari(0,0,0) << '\n';
	return 0;
}
