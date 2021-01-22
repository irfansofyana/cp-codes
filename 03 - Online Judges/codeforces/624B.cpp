#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,i,j;
vector<ll> A;

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		A.push_back(j);
	}
	ll ans = 0;
	sort(A.begin(),A.end(),comp);
	ans += A[0]; j = A[0]-1;
	for (i = 1 ; i < n ; i++) {
		if (A[i]>=j && j>0) {
			ans += j;
			j--;
		}
		else if (j>A[i]){
			ans += A[i]; j = A[i]-1;
		}
	}
	cout << ans << '\n';
	return 0;
}