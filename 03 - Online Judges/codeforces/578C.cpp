#include <bits/stdc++.h>
using namespace std;


const int MAXN = 2e5;
const double EPS = 1e-9;

typedef long long LL;

int N;
double arr[MAXN+5];
double ans;

double compute(double x){
	double res;
	double mini=0.0, maks=0.0;
	double sum=0;
	for (int i = 0; i < N; i++){
		sum += arr[i]-x;
		if (i == 0){
			res = abs(arr[i]-x);
		}else {
			double tmini = sum - maks;
			double tmaks = sum - mini;
			if (abs(tmini) > res) res = abs(tmini);
			if (abs(tmaks) > res) res = abs(tmaks);
		}
		if (sum < mini) mini = sum;
		if (sum  > maks) maks = sum;
	}
	return res;
}

void solve(){
	double lo = -2e9;
	double hi = 2e9;
	double ans = 1e18;
	for (int i = 0; i <= 200; i++){
		double l1 = lo + (hi-lo)/3;
		double l2 = hi - (hi-lo)/3;
		double f1 = compute(l1);
		double f2 = compute(l2);
		if (f1 < f2){
			hi = l2;
		}else{
			lo = l1;
		}
	}
	printf("%.15lf\n", compute(lo));
}

int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%lf", &arr[i]);
	solve();
	return 0;
}