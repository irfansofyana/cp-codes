#include <bits/stdc++.h>
using namespace std;

int i,j,n,sum;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << "PERFECTION OUTPUT\n";
	while(cin >>n,n){
		sum = 0;
		for (i = 1 ; i <= (int)sqrt(n); i++){
			if (n%i==0) {
				j = n/i;
				if (i==j) {
					if (i<n) sum+=i;
				}
				else {
					if (i<n) sum += i;
					if (j<n) sum += j;
				}
			}
		}
		int x = n;
		int xx = 0;
		while (x>0) {
			xx++;
			x /= 10;
		}
		for (i = 0 ; i < 5-xx ; i++) cout << " ";
		cout << n << "  ";
		if (sum==n) cout << "PERFECT\n";
		else if (sum<n) cout << "DEFICIENT\n";
		else cout << "ABUNDANT\n";
	}
	cout << "END OF OUTPUT\n";
	return 0;
}