#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll arr[500005];
map<ll,ll> mep;

void generate() {
	arr[0] = 0;
	mep[0]++;
	for (i = 1 ; i <= 500000 ; i++) {
		m = arr[i-1]-i;
		if (m > 0 && mep[m]==0) {
			mep[m]++;
			arr[i] = m;
		}
		else {
			arr[i] = arr[i-1] + i;
			mep[arr[i]]++;
		}
	}
	//for (i = 0 ; i <= 15 ; i++) cout << arr[i] << " " ; cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	while (cin >> n) {
		if (n==-1) return 0;
		cout << arr[n] << '\n';
	}
	return 0;
}