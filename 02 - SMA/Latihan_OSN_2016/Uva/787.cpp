#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,k;
ll dp[1005];
vector<ll> A;
vector<ll> nol;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		A.push_back(n);
		while (cin >> m && m!=-999999) {
			A.push_back(m);
		}
		memset(dp,0,sizeof dp);
		dp[0] = 1;
		nol.clear();
		for (i = 0 ; i < A.size(); i++){
			if (A[i]==0) {
				nol.push_back(i+1);
				dp[i+1] = 1;
			}
			else dp[i+1] = dp[i] * A[i];
		}
		ll ans;
		bool pertama = true;
		for (i = 1 ; i <= (ll)A.size(); i++){
			for (j = i ; j <= (ll)A.size(); j++){
				if (i==j) {
					if (pertama) {
						pertama = false; ans = A[i-1];
					}
					else ans = max(ans,A[i-1]);
				}
				else {
					bool ada = false;
					for (k = 0 ; k < nol.size(); k++){
						if (i <= nol[k] && nol[k] <= j) {
							ada = true;
							break;
						}
					}
					if (ada) {
						if (pertama) {ans = 0; pertama = false;}
						else ans = max(ans,(ll)0);
					}
					else {
						if (pertama) {pertama = false; ans = (dp[j]/dp[i-1]);}
						else ans = max(ans,(dp[j]/dp[i-1]));
					}
				}
			}
		}
		cout << ans << '\n';
		A.clear();
	}
	return 0;
}