#include <cstdio>
#include <cstdlib>

long long n,a,b;

int main(){
	long long i;
	scanf("%I64d%I64d",&a,&b);
	while(b){
		n+=a/b;
		i=a%b;
		a=b;
		b=i;
	}
	printf("%I64d\n",n);
	return 0;
}
