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

int n;
int arr[2005];

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
	#endif
    scanf("%d", &n);
    int fpb = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
    	scanf("%d", &arr[i]);
    	if (i == 0) fpb = arr[i];
    	else fpb = __gcd(fpb, arr[i]);
    	if (arr[i] == 1) one++;
    }
    if (fpb > 1) printf("-1\n");
    else {
    	if (one > 0) printf("%d\n", n - one);
    	else {
    		int ans = 1e9;
    		for (int i = 0; i < n; i++){
    			int curr = arr[i];
    			for (int j = i+1; j < n; j++){
    				curr = __gcd(curr, arr[j]);
    				if (curr == 1){
    					ans = min(ans, j-i);
    					break;
    				}
    			}
    		}
    		if (ans == 1e9) puts("-1");
    		else printf("%d\n", ans + n - 1);
    	}
    }
	return 0;
}