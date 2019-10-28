#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,m,k;
ll tc;
ll ans;
vector<ll> prefix;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//bool pertama = true;
	while (cin >> n) {
		prefix.clear();
		prefix.push_back(1);
		ans = 0;
		for (i = 1 ; i <= n ; i++) {
			cin >> m;
			if (m==0) {
				for (j = 1 ; j <= (int)prefix.size()-1; j++){
					for (k = j ; k <= (int)prefix.size()-1; k++){
						ans = max(ans,prefix[k]/prefix[j-1]);
					}
				}
				prefix.clear();
				prefix.push_back(1);
			}
			else {
				ll temp = prefix[(int)prefix.size()-1];
				prefix.push_back(temp*m);
			}
		}
		for (j = 1 ; j <= (int)prefix.size()-1; j++){
			for (k = j ; k <= (int)prefix.size()-1; k++){
				ans = max(ans,prefix[k]/prefix[j-1]);
			}
		}
		cout << "Case #" << ++tc << ": The maximum product is " << ans << "." << '\n' << '\n';
	}
	return 0;
}