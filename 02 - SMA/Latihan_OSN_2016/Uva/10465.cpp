#include <bits/stdc++.h>
using namespace std;

int n,m,t;
int a,b;
int i,j;
int sisa;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> m >> n >> t){
		a = max(m,n); b = min(m,n);
		int ans = (int)1e+9;
		int jaw1,jaw2;
		for (i = 0 ; i <= t/a; i++) {
			j = (t - i*a)/b;
			sisa = t - j*b - i*a;
			if (sisa < ans) {
				ans = sisa;
				jaw1 = i;
				jaw2 = j;
			}
		}
		cout << jaw1 + jaw2;
		if (t-jaw1*a-jaw2*b > 0) cout << " "<< t-jaw1*a-jaw2*b ;
		cout << '\n';
	}
	return 0;
}