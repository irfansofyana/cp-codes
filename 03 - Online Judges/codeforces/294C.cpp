#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const int MOD = 1e9 + 7;

int n, m;
int arr[2005];
int tot;
LL comb[2005][2005];
LL ans;

void precompute(){
	comb[0][0] = 1;
	for (int i = 1; i <= 2000; i++){
		for (int j = 0; j <= i; j++){
			if (j == 0 || j == i) comb[i][j] = 1LL;
			else comb[i][j] = ((comb[i-1][j]%MOD) + (comb[i-1][j-1])%MOD)%MOD;
		}
	}
}

LL power(int a, int b){
	if (b == 0) return 1LL;
	else if (b == 1) return 1LL*a;
	LL tmp = power(a, b/2);
	tmp = (tmp * tmp) % MOD;
	if (b%2 == 0) return tmp;
	else return (a * tmp) % MOD;
}

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
	#endif
    OPTIMIZE
    precompute();
    cin >> n >> m;
    for (int i = 0; i < m; i++){
    	cin >> arr[i];
    }
    sort(arr, arr + m);
    tot = n - m;
    ans = comb[tot][arr[0]-1];
    tot -= (arr[0]-1);
    for (int i = 0; i < m-1; i++){
    	int cnt = arr[i+1]-1 - (arr[i]+1) + 1;
        if (cnt == 0) continue;
    	ans = (ans * comb[tot][cnt]) % MOD;
    	ans = (ans * power(2, cnt-1)) % MOD;
    	tot -= cnt;
    } 
    ans = (ans * comb[tot][n-arr[m-1]]);
    cout << ans << '\n';
    return 0;
}