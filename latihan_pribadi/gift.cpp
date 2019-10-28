#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int tc,t;
int i,j;
vector<int> a,b;
int n,m,k;
long long ans;
bool temu;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		a.clear(); b.clear();
		while (n>=1) {
			a.push_back(n);
			n/=2;
		}
		while (m>=1) {
			b.push_back(m);
			m/=2;
		}ans = 0; temu = false;
		for (i = 0 ; i < a.size() ; i++) {
			ans += a[i];
			for (j = 0 ; j < b.size(); j++) {
				if (a[i]==b[j]) {
					for (k = 0 ; k < j ; k++) ans += b[k];
					temu = true;
					break;
				}
			}
			if (temu) break;
		}
		cout << "Case #" << ++tc << ": " << ans << endl;
	}
	return 0;
}