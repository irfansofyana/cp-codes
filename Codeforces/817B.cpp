//817B
#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int n;
map<int,int> mep;
vector<int> arr;

ll cari(ll n,ll k){
	if (k == 0) return 1;
	if (k == 1) return n;
	if (k == 2) return (n*(n-1))/2;
	if (k == 3) return (n*(n-1)*(n-2))/6;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		arr.pb(x); mep[x]++;
	}
	sort(arr.begin(), arr.end());
	int t[3];
	for (int i = 0 ; i < 3; i++) t[i] = arr[i];
	if (t[0] == t[1] && t[1] == t[2]) {
		cout << cari((ll)mep[t[0]], 3) << '\n';
	}
	else if (t[0] == t[1]) {
		cout << mep[t[2]] << '\n';
	}
	else if (t[1] == t[2]) {
		cout << cari(mep[t[1]],2) << '\n';
	}
	else {
		cout << mep[t[2]] << '\n';
	}
	return 0;
}