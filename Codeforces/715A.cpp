#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll curr;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	curr = 2;
	for (i = 1 ; i <= n ; i++) {
		if (i == 1) cout << 2 << '\n';
		else {
			cout << i*(i+1)*(i+1) - (i-1) << '\n';
		}
	}
	return 0;
}
