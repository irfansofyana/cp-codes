#include <bits/stdc++.h>
#define eps 1e-9
using namespace std;

int r,c,i,j;
double A[1005][1005];
double v,depan,ujung;
double tengah;

double fungsi(double k) {
	double result=0.0;
	for (int z=0;z<r;z++) {
		for (int zz=0;zz<c;zz++) {
			if (A[z][zz]<k)
				result+=k-A[z][zz]; 
		}
	}
	return result;
}

int main(){
	scanf("%d %d %lf",&r,&c,&v);
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			scanf("%lf",&A[i][j]);
	depan = 0.0; ujung=2000000.0;
	while (fabs(ujung-depan)>eps) {
		tengah = (ujung+depan)/2;
		if (fungsi(tengah)>v) ujung = tengah;
		else depan = tengah;
	}
	printf("%.3lf\n",(depan+ujung)/2);
}
