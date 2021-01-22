#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
string s;
ll n,i,j,x,y,ans,sum;
ll A[100005];

int main(){
	OPTIMASI
	cin >> s;
	cin >> x >> y;
	if (y==0) {
		cout << 0 << '\n';
		return 0;
	}
	for (i = 0 ; i < (ll)s.size(); i++) {
		if (i==0) {
			if (s[i]=='U') {
				A[i] = y+1;
				sum++;
			}
			else if (s[i]=='D') {
				A[i] = y-1;
				sum--;
			}
			else A[i] = y;
		}
		else {
			if (s[i]=='U') {
				A[i] = A[i-1]+1;
				sum++;
			}
			else if (s[i]=='D') {
				A[i] = A[i-1]-1;
				sum--;
			}
			else A[i] = A[i-1];
		}
		if (A[i]==0) {
			cout << i+1 << '\n';
			return 0;
		}
	}
	ans = 1e15;
	if (sum==0) {cout << -1 << '\n'; return 0;}
	for (i = 0 ; i < (ll)s.size(); i++) {
		ll temp = ((A[i])/sum)*-1+1;
		if (temp>=1 && A[i]+(temp-1)*sum==0) ans = min(ans,(temp-1)*(ll)s.size()+i+1);
	}
	if (ans!=1e15) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}