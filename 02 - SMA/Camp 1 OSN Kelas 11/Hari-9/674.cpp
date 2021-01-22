#include <bits/stdc++.h>
using namespace std;

long long n,i,j,k,c;
long long uang[5]={1,5,10,25,50};
long long nway[8000];

int main(){
	cin.tie(0);
	nway[0] = 1;
	for (i = 0; i < 5 ; i++) {
		c = uang[i];
		for (j = c ; j<= 7489 ; j++) {
			nway[j] += nway[j-c];
		}
	}
	while (cin >> n) {
		if (n==0) cout << 0 << endl;
		else cout << nway[n] << endl;
	}
	return 0;
}