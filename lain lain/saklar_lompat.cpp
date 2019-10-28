#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int t,n,i,j;
int lurus,belok;
queue<int> antrian;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> lurus >> belok;
		int ans = 0;
		if (lurus == 0 && belok == 0) continue;
		ans++;
		while (lurus > 0 || belok > 0) {
			int tempat = 4;
			int ujung = 0;
			if (belok >= 2) {
				ujung+=2;
				belok -= 2;
				tempat -= 2;
			}
			else if (belok == 1) {
				ujung++;
				tempat--;
				belok--;
			}
			
			if (belok >= 1) {
				tempat--;
				//cout << belok << " " << ans << '\n';
				ans++;
				if (lurus >= 1) lurus--;
				else if (belok == 1) {
					belok--;
					ans--;
				}
				continue;
			}

			if (tempat == 4) {
				if (lurus <= 4) break;
				else {
					lurus -= 3;
					tempat = 4;
					ans++;
				}
			}
			else if (tempat == 3) {
				if (lurus <= 3) break;
				else {
					lurus -= 2;
					tempat = 4;
					ans++;
				}
			}
			else if (tempat == 2) {
				if (lurus <= 2) break;
				else {
					lurus -= 2;
					tempat = 4;
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}	
	return 0;
}