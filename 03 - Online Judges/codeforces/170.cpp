#include <bits/sdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
string s;
ll n,i,j,x,y,ans;
ll A[100005];

int main(){
	OPTIMASI
	cin >> s;
	cin >> x >> y;
	ll sum = 0;
	for (i = 0 ; i < (ll)s.size(); i++) {
		if (s[i]=='U') {
			A[i] = y+1;
			sum ++;
		}
		else if (s[i]=='D') {
			A[i] = y-1;
			sum --;
		}
		else A[i] = y;
		if (A[i]==0) {
			cout << i+1 << '\n';
			return 0;
		}
	}
	ans = 1e15
	for (i = 0 ; i < (ll)s.size(); i++) {
		ll temp = (A[i]/(-1*sum))+1;
		if (temp>=0 && (-1*sum*(temp-1))==A[i]) ans = min(ans,(temp-1)*(ll)s.size()+i+1);
	}
	cout << ans << '\n';
	return 0;
}