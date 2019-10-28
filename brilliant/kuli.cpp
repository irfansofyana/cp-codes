#include <bits/stdc++.h>
using namespace std;

int i,j,k;
int ada[729*4+5];

int main(){
	int ans = 0;
	for (i = 0 ; i * i * i <= 729*4 ; i++) ada[i*i*i] = true;
	for (i = 100; i <= 999; i++) {
		j = i;
		k = 0;
		while (j > 0){
			k += (j%10)*(j%10)*(j%10);
			j /= 10;
		}
		if (ada[k]) {
			cout << i << '\n';
		}
	}
	//cout << ans << '\n';
}