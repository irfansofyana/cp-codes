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

int n, k;
int arr[10005];

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
	#endif
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr + n);
	printf("%d\n", arr[k-1]);
	return 0;
}