#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	scanf("%d", &n);
	if ((n&(n-1))==0) puts("YES");
	else puts("NO");
	return 0;
}
