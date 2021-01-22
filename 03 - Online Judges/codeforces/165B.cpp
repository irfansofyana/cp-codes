#include <bits/stdc++.h>
#define eps 1e-6
using namespace std;

int n,k;
double ans,tengah,lo,hi;

double fungsi(double bil) {
	double smt = 1.00;
	double result = 0.00;
	while (floor(bil/smt)>0) {
		result += floor(bil/smt);
		smt *=(double)k;
	}
	return result;
}

int main(){
	scanf("%d %d", &n, &k);
	lo = 0.00; hi = 1000000000.00;
	while (fabs(hi-lo)>eps) {
		tengah = (lo+hi)/2.0;
		if (fungsi(tengah)>=(double)n) {
			ans = tengah;
			hi = tengah;
		}
		else lo = tengah;
	}
	printf("%.0lf\n", ans);
	return 0;
}
