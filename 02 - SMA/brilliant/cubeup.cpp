#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[19][18*729+5];
ll n,m,i,j,k,asli;
ll temp;
bool pangkat3[100005];

ll rekursi(ll n,ll m){
	if (m < 0) return 0;
	if (n==1 && pangkat3[m] && m <= 729) return 1;
	if (n==1) return 0;
	if (dp[n][m]!=-1) return dp[n][m];
	ll res = 0;
	for (ll idx = 0 ; idx <= 9 ; idx++) {
		res += rekursi(n-1,m-idx*idx*idx);
	}
	return dp[n][m] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(dp,-1,sizeof dp);
	memset(pangkat3,false,sizeof pangkat3);
	for (i = 0 ; i * i * i <= 100000; i++) pangkat3[i*i*i] = true;
	for (i = 1 ; i * i * i <= 729*18 ; i++) {
		for (j = 1 ; j <= 9; j++) {
			temp += rekursi(17,i*i*i-j*j*j);
		}
	}
	cout << temp << '\n';
	return 0;
}