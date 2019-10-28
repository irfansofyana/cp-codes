#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

long long t,n,i,j,sum;
long long butuh[100005],isi[100005];
long long jaw;

int main(){
	OPTIMASI;
	cin >> t;
	long long tc = 0;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= n ; i++) cin >> isi[i];
		for (i = 1 ; i <= n; i++) cin >> butuh[i];
		long long ans = 0;
		for (i = 1 ; i <= n ; i++) {
			ans += isi[i]-butuh[i];
		}
		cout << "Case " << ++tc << ": ";
		if (ans < 0) cout << "Not possible\n";
		else {
			i = 1; sum = 0; jaw = -1;
			while (i <= n) {
				sum += isi[i]-butuh[i];
				if (sum < 0) {
					sum = 0; i++; jaw = -1;
				}
				else {
					if (jaw == -1) jaw = i;
					i++;
				}
			}
			cout << "Possible from station " << jaw << '\n';
		}
	}
	return 0;
}