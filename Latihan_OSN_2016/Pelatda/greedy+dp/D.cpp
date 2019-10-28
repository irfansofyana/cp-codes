#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i,j;
ll s,sisa;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> s;
		if (2*s == (n*(n+1))) cout << 0 << '\n';
		else {
			for (i = n-1 ; i >= 1; i--) {
				if (((i*(i+1))/2) <= s){
					sisa = s-((i*(i+1))/2);
					if (sisa >= n-i) {
						cout << n-i << '\n';
						break;
					}
				}
			}
		}
	}
	return 0;
}