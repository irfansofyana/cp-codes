#include <bits/stdc++.h>
#define eps 1e-9
using namespace std;

int n,i,j;
double A[50010];
double ans,hi,lo,tengah;
double mini;

double fungsi(double x){
	double result=0.00;
	for (int z=0;z<n;z++) {
		double temp = fabs(A[z]-x);
		result+= pow(temp,1.5);
	}
	return result;
}

int main() {
	scanf("%d",&n);
	for (i=0;i<n;i++) 
		scanf("%lf",&A[i]);
	mini = min(fungsi(-1000.0),fungsi(1000.0));
	ans = (mini==fungsi(-1000.0)?-1000.00:1000.00);
	lo = -1000.0; hi = 1000.0;
	while (fabs(hi-lo)>eps) {
		tengah = (hi+lo)/2.0;
		if (fungsi(tengah-eps)<fungsi(tengah) && fungsi(tengah)<fungsi(tengah+eps)) {
			hi = tengah;
		}
		else lo = tengah;
	}
	printf("%.2lf\n",(lo+hi)/2);
}
