#include <bits/stdc++.h>
using namespace std;
long long A[1000010];
long long n,i,j;
long long t;

long long sqr(long long a){
	return a*a;
}
long long f(long long a,long long b){
	if (b==0) return 1;
	else if (b==1) return (a%10);
	else if (b%2==0) return (sqr(f(a,(b/2))%10)%10);
	else if (b%2==1) return (a%10)*(sqr(f(a,(b-1)/2)%10)%10);
}
void isiarray(){
	A[1]=1;
	for (j=2;j<=1000000;j++){
		A[j]=(f(j,j)+A[j-1])%10;
	}
}
int main(){
	scanf("%lld",&t);
	isiarray();
//	cout<<f(3,3)%10<<endl;
	for (i=1;i<=t;i++){
		scanf("%lld",&n);
		printf("%lld\n",A[n]);
	}
	return 0;		
}
