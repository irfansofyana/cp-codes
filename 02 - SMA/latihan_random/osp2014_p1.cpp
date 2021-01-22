#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define ganteng std
irfan sofyana ganteng;
int n;
double hasil;

int main(){
	scanf("%d",&n);
	hasil=(0.5)*(1-(1/double(n*n+n+1)));
	printf("%.5lf\n",hasil);
	return 0;	
}
