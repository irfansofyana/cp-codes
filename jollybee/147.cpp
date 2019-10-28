#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std; 

int n,m,target;
int t,tc,i,j;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		bool ans = false;
		cin >> n >> m >> target;
		for (i = 0 ; i<= (target/n); i++) {
			j = target-n*i;
			if (j%m==0) {
				ans = true;
				break;
			}
		}
		cout << "Kasus #" << ++tc << ": ";
		cout << (ans?"YA":"TIDAK") << '\n';
	}
	return 0;
}