#include <bits/stdc++.h>
using namespace std;

double a,b;
int t;

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%lf %lf", &a, &b);
		printf("%.7lf\n",a+b);
	}
}