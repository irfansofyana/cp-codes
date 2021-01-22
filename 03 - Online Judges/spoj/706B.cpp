#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define OPTIMASI
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int n,i,j,q,ans;
vector<int> arr;
int x;

int main(){
	#ifdef OPTIMASI 
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		arr.pb(j);
	}
	sort(arr.begin(),arr.end());
	cin >> q;
	while (q--) {
		cin >> x;
		i = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
		i--;
		if (i == -1) cout << 0 << '\n';
		else cout << i + 1 << '\n';
	}
	return 0;
}
