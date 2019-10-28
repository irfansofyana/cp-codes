#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int x,k;
int maks,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n==-1) return 0;
		n*=2;
		maks = -1; ans = 0;
		for (i = 1 ; i <= (int)sqrt(n); i++){
			if (n%i==0) {
				j = n/i;
				if ((j+1-i)>0 && (j+1-i)%2==0) {
					k = (j+1-i)/2;
					if (i>maks) {
						maks = i;
						ans = k;
					}
				}
				if ((i+1-j)>0 && (i+1-j)%2==0) {
					k = (i+1-j)/2;
					if (j>maks) {
						maks = j;
						ans = k;
					}
				}
			}
		}
		cout << (n/2) << " = " << ans << " + ... + " << ans+maks-1 << '\n';
	}
	return 0;
}