#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int x,y,z;
int main(){
	scanf("%d %d %d",&a,&b,&c);
	if (a+b<c || a+c<b || b+c<a || (a+b+c)%2==1) printf("Impossible\n");
	else {
		x=(a+b-c)/2;
		y=(b+c-a)/2;
		z=(a+c-b)/2;
		printf("%d %d %d\n",x,y,z);
	}
	return 0;
}
