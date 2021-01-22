#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll step;

int main(){
	for (i = 10 ; i > 0; i++) {
		j = i; step = 0;
		while (j>=10) {
			step++;
			n = 1; m = j;
			while (m>0) {
				n *= (m%10);
				m /= 10;
			}
			j = n;
		}
		//cout << step << '\n';
		if (step==9) {
			cout << i << '\n';
			return 0;
		}
	}
}