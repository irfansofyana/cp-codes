#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, k, curr;
vector<pair<int,int> > arr;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	int x = n - 2*k;
	curr = 1;
	for (int i = 1; i <= x; i++){
		arr.pb({curr + 1, curr});
		curr += 2;
	}
	for (int i = 1; i <= n-x; i++) {
		if (i%2 == 1) arr.pb({curr + 1, curr});
		else arr.pb({curr, curr+1});
		curr += 2;
	}
	for (int i = 0 ; i < arr.size(); i++) {
		cout << arr[i].fi << " " << arr[i].se;
		cout << (i == (int)arr.size()-1 ? '\n' : ' ');
	}
	return 0;
}