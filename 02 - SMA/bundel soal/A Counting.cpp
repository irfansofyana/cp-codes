#include <bits/stdc++.h>
using namespace std;

long long t,tc;
long long a,b;

int main(){
	scanf("%lld",&t);
	while (t--) {
		scanf("%lld %lld",&a,&b);
		if ((b-a)%12!=0) {
			printf("Case #%lld: impossible\n",++tc);
		}
		else {
			printf("Case #%lld: %lld\n",++tc,a+((b-a)/12)*7);
		}
	}
	return 0;	
}
