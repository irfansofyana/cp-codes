/* 
	Problem 	: easy fibonacci
	created 	: 07-10-2017
	solution by : cokguzel48 (Irfan Sofyana Putra)
*/

#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll NMAX = (ll)5e5;
const ll MOD = (ll)1e8+7;

ll T, N;
ll dp[NMAX+5];

void isi(){
	dp[0] = 0; dp[1] = 1;
	for (int i = 2; i <= NMAX; i++) {
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> T;
	while (T--){
		cin >> N;
		cout << dp[N] << '\n';
	}
	return 0;
}