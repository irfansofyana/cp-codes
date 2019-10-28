#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define INF 1000000000

using namespace std;

const int N = 20;

int t,n,i,j;
int dp[N + 5][5];
int arr[N + 5][5];

int cari(int idx,int stet){
	if (idx == n) return 0;
	if (dp[idx][stet] != -1) return dp[idx][stet];
	if (stet == 0) return dp[idx][stet] = min(cari(idx + 1, 1) + arr[idx][0], cari(idx + 1, 2) + arr[idx][0]);
	if (stet == 1) return dp[idx][stet] = min(cari(idx + 1, 0) + arr[idx][1], cari(idx + 1, 2) + arr[idx][1]);
	if (stet == 2) return dp[idx][stet] = min(cari(idx + 1, 0) + arr[idx][2], cari(idx + 1, 1) + arr[idx][2]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++){
			for (j = 0 ; j < 3 ; j++)
				cin >> arr[i][j];	//0 -- A
									//1 -- D
									//2 -- B
		}
		memset(dp, -1, sizeof dp);
		cout << min(min(cari(0,0),cari(0,1)),cari(0,2)) << '\n';
	}
	return 0;
}
