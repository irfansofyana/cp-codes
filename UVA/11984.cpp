#include <bits/stdc++.h>
using namespace std;

int c,f,d,t,tc;
double ans,fr;

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &c, &d);
		fr  = double(c)*(double(9)/5)+double(32);
		fr += double(d);
		printf("Case %d: %.2lf\n",++tc,(double(5)/9)*(fr-double(32)));
	}
	return 0;
}