#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll n,maks,i,j;
ll A[100005];
vector<ll> ans;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	maks = -1e15;
	for (i = n-1 ; i>=0 ; i--) {
		if (A[i]>maks) {
			ans.push_back(0);
			maks = A[i];
		}
		else if (A[i]<maks) {
			ans.push_back(maks-A[i]+1);
		}
		else if (A[i]==maks) {
			ans.push_back(1);
		}
	}
	reverse(ans.begin(),ans.end());
	for (i = 0 ; i < ans.size(); i++) {
		cout << ans[i] ;
		cout << (i==ans.size()-1?'\n':' ');
	}
	return 0;
}