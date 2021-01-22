#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define eps 1e-9
using namespace std;

const int N = 20000;

int n,i,j;
double arr[N + 5],k;
double lo,hi,m1,m2;

double sqr(double x){
	return x*x;
}

double f(double x) {
	double res = 0;
	for (int z = 0 ; z < n ; z++) {
		if (arr[z] < x) res += sqr(x-arr[z]);
		if (arr[z] > x+k) res += sqr(arr[z]-x-k);
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	lo = 0; hi = 20000.00;
	while (fabs(lo-hi) > eps) {
		m1 = (2 * lo + hi)/3;
		m2 = (lo + 	2*hi)/3;
		if (f(m1) > f(m2)) lo = m1;
		else hi = m2;
	}
	double ans = f(lo);
	cout << fixed << showpoint << setprecision(6);
	cout << ans << '\n';
	return 0;
}
