#include <bits/stdc++.h>
using namespace std;

int i,j,k;
int A,B,C;
int tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> A >> B >> C;
		bool ans = false;
		for (i = -100; i <= 100; i++) {
			for (j = -100; j <= 100; j++) {
				for (k = -100; k <= 100; k++) {
					if (i!=j && i!=k && j!=k) {
						if (i*i+j*j+k*k==C && i*j*k==B && i+j+k==A){
							if (!ans) cout << i << " " << j << " " << k << '\n';
							ans = true;
						}
					}
				} 
			}
		}
		if (!ans) cout << "No solution." << '\n';
	}
	return 0;
}