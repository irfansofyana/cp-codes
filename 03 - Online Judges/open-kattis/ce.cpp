#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

ll curr,i;
map<ll,ll> mep;

int main(){
	curr = 1;
	for (i = 1 ; i > 0; i++) {
		curr = (10*curr)%MOD;
		curr -= 4;
		if (mep[curr] > 0) {
			cout << mep[curr] << '\n';
			return 0;
		}
		else mep[curr] = i;
	}
}