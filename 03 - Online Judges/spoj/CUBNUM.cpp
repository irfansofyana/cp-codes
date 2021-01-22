#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll tc;
ll memo[100005];
ll can[100005];

ll minimal(ll x){
	if (x == 0) return 0;
	if (can[x]) return 1; 
	if (memo[x] != -1) return memo[x]; 
	ll mini = x;
	for (ll z = 1 ; z * z * z <= x; z++) {
		if (minimal(x - z*z*z) + 1 < mini) mini = minimal(x- z*z*z) + 1;
	}
	return memo[x] = mini;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(can,false,sizeof can);
	for (i = 1 ; i * i * i <= 100000; i++) can[i*i*i] = true;
	memset(memo, -1 , sizeof memo);
	while (cin >> n){
		cout << "Case #" << ++tc << ": " << minimal(n) << '\n';
	}
	return 0;
}
