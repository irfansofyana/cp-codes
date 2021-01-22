#include <bits/stdc++.h>
using namespace std;

long long n;
double ans;

int main(){
	scanf("%lld",&n);
	ans = ((n-1)*n)/4.00;
	printf("%.2lf\n",ans);
	return 0;
}
