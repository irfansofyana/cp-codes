#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll n,i,j,mini;
ll A[200005];
ll ans;
vector<ll> temp;

int main(){
	OPTIMASI
	cin >> n;
	mini = 2000000000;
	for (i = 0 ; i  < n ; i++) {
		cin >> A[i];
		if (A[i]<=mini) {
			mini = A[i];
		}
	}
	ans = mini*n;
	for (i = 0 ; i < n ; i++) {
		if (A[i]==mini) temp.push_back(i);
	}
	ll maks = -1;
	for (i = 0 ; i  < temp.size(); i++) {
		if (i==temp.size()-1) {
			maks = max(maks,n-1-temp[i]+temp[0]);
		}
		else maks = max(maks,temp[i+1]-temp[i]-1);
	}
	ans += maks;
	cout << ans << '\n';
	return 0;
}