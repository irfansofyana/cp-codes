#include <bits/stdc++.h>
using namespace std;

long long a,b,c,n;
long long f[300005];
long long i;
long long sqr(long long x){
	return x*x;
}
long long pangkat(long long x,long long y,long long z){
	if (y==0) return 1;
	else if (y==1) return (x%z);
	else if (y%2==0) return (sqr(pangkat(x,y/2,z)%z)%z)%z;
	else if (y%2==1) return ((x%z)*(pangkat(x,y-1,z)%z)%z)%z;
}
int main(){
	scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
	f[0] = a%n;
	//printf("%lld\n",f[0]);
	for (i=1;i<=c;i++) {
		f[i] = pangkat(f[i-1],b,n)%n;
	}
	printf("%lld\n",f[c]+1);
	return 0;
}