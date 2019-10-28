#include <bits/stdc++.h>
using namespace std;

int n,i;
int x,y;

int main(){
	scanf("%d", &n);
	x = (n/36); y = ((n-36*x)/3);
	printf("%d %d\n", x, y);
	return 0;
}