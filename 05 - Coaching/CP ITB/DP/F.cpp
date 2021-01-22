/*
	Problem		: F. Dividing Coins
	created		: 08-10-2017
	solution by	: cokguzel48 (Irfan Sofyana Putra)
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, m;
int arr[105], dp[105][50005];

int cari(int idx,int sisa){
	if (idx >= m) return 0;
	if (dp[idx][sisa]!= -1) return dp[idx][sisa];
	int x = 0;
	//ambil
	if (sisa >= 2*arr[idx]) x = cari(idx + 1, sisa - 2*arr[idx]) + arr[idx];
	return dp[idx][sisa] = max(x, cari(idx + 1, sisa));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> m;
		int sum = 0;
		for (int i = 0 ; i < m ; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		memset(dp, -1, sizeof dp);
		cout << sum - 2*cari(0, sum) << '\n';
	}
	return 0;
}