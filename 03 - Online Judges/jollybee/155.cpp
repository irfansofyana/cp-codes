#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll x,i,j,temp;
ll A[7];

int main(){
	OPTIMASI
	int t,tc = 0;
	cin >> t;
	while (t--) {
		for (i = 0 ; i < 5 ; i++) cin >> A[i]; 
		cin >> x;
		bool ans = false;
		for (i = 0 ; i < (1<<5); i++) {
			temp = 0;
			for (j = 0 ; j < i ; j++) {
				if (i&(1<<j)) temp += A[j];
			}
			if (temp==x) {
				ans = true; break;
			}
		}
		cout << "Case #" << ++tc << ": " ;
		cout << (ans?"YES":"NO") << '\n';
	}
	return 0;
}