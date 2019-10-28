#include <bits/stdc++.h>
using namespace std;

int n,m,acuan;

int main(){
	scanf("%d %d", &n, &m);
	if (n==1 && m==1) puts("1");
	else {
		if (m<=(n/2)) {
			printf("%d\n", m+1);
		}
		else {
			printf("%d\n", m-1);
		}
	}
	return 0;
}