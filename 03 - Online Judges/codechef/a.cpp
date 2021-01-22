#include <bits/stdc++.h>
using namespace std;

int i,j,sum;

int main(){
	j = 1;
	for (i = 1; i<= 100 ; i++) {
		sum += j;
		if (i<50) j+=3;
		else j+=2;
	}
	printf("%d\n", sum);
}