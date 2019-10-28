#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
int temp,banyak;
int k;

int main() {
	i = 1;
	while (i>0) {
		temp = (i*(i+1)/2);
		banyak = 0;
		for (j=1;j<=int(sqrt(temp));j++) {
			if (temp%j==0) {
				k = temp/j;
				if (k!=j) banyak+=2;
				else banyak++;
			}
		}
		if (banyak>500) {
			printf("%d\n",temp);
			break;
		}
		else i++;
	}
	return 0;
}
