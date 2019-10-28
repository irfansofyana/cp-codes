#include <bits/stdc++.h>
#define OPTIMASI
using namespace std;

typedef long long ll;

int t,tc;
ll n,i,j,x;

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "Case " << ++tc << ":";
		j = 1;
		while (j * j < n) j++;
		j--;
		for (i = j ; i >= 1; i--) {
			x = n-i*i;
			if (x%i == 0) 
				cout << " " << x ;
		}
		cout << '\n';
	}
	return 0;
}