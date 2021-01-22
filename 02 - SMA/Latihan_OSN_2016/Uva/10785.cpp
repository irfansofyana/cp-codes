#include <bits/stdc++.h>
using namespace std;

int n,tc,m,i,j;
string vok,kons,ans;
char vokal[]={'A','U','E','O','I'};
char konsonan[]={'J','S','B','K','T','C','L','D','M','V','N','W','F','X','G','P','Y','H','Q','Z','R'};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		vok = ""; kons = "";
		int _lastvokal = 0,frek1 = 0; 
		int _lastkon = 0,frek2 = 0;
		for (i = 0 ; i < n ; i++) {
			if (i%2==0) {
				vok = vok + vokal[_lastvokal];
				frek1++;
				if (frek1==21) {
					frek1 = 0;
					_lastvokal++;
				}
			} 
			else {
				kons = kons + konsonan[_lastkon];
				frek2++;
				if (frek2==5) {
					frek2 = 0;
					_lastkon++;
				}
			}
		}
		sort(vok.begin(),vok.end()); sort(kons.begin(),kons.end());
		ans = "";
		int x = 0;
		int y = 0;
		for (i = 0 ; i < n ; i++) {
			if (i%2==0) ans = ans+ vok[x];
			else ans = ans + kons[y];
			if (i%2==0) x++;
			else y++;
		}
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}