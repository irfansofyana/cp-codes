#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int s,d,tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> t;
	while (t--) {
		cin >> n;
		s = d = 0;
		for (i = 0 ; i < n ; i++) {
			cin >> j;
			if (j == 1) s++;
			else d++;
		}
		int satu,dua;
		int ans = (int)1e9;
		for (i = 0 ; i <= s; i++) {
			for (j = 0 ; j <= d; j++) {
				satu = s + 2*d - i - 2*j;
				dua = i + 2*j;
				ans = min(ans,abs(satu-dua));
			}
		}
		cout << "Case #" << ++tc << ": " << ans << '\n';
	}
	return 0; 
}
