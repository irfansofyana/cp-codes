#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

bool atas[1005],bawah[1005];
int t,tc,n,m,i,j;
int q;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		memset(atas,false,sizeof atas); memset(bawah,false,sizeof bawah);
		for (i = 0 ; i < n ; i++) {
			int x,y;
			cin >> x >> y;
			for (j = x ; j <= x+y; j++) 
				atas[j] = true;
		}
		cin >> m;
		for (i = 0 ; i < m ; i++) {
			int x,y;
			cin >> x >> y;
			for (j = x ; j <= x+y; j++) 
				bawah[j] = true;
		}
		cin >> q;
		cout << "Kasus " << ++tc << ":" << '\n';
		while (q--) {
			int x;
			cin >> x;
			i = x;
			int ans = 0;
			while (i<=1000) {
				j = i/x;
				if (j%2==1 && !atas[i]) break; 
				else if (j%2==0 && !bawah[i]) break;
				ans++; i += x;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}