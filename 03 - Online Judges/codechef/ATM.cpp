#include <bits/stdc++.h>
using namespace std;

double y;
int x;

int main(){
	scanf("%d %lf",&x,&y);
	if (x%5==0) {
		if (double(x)+0.50<=y) 
			printf("%.2lf\n",y-double(x)-0.50); 
		else 
			printf("%.2lf\n",y);
	}
	else printf("%.2lf\n",y);
	return 0;
} 
