#include <bits/stdc++.h>
using namespace std;

long long t,n,m,a,b,mulai,akhir;
long long i,j;
long long habis1,habis2,irisan;

int fpb(long long k,long long l){
	if (l==0) return k;
	else return fpb(l,k%l);
}

int main(){
	scanf("%lld",&t);
	while (t--) {
		scanf("%lld %lld %lld %lld",&a,&b,&n,&m);
		i = ceil((double(a)/n));
		if (i==0) mulai = 1;
		else mulai = i;
		habis1 = n*(((b/n)*((b/n)+1))/2-(mulai*(mulai-1))/2);
		j = (n*m)/fpb(n,m);
		i = ceil((double(a)/j));
		if (i==0) mulai = 1;
		else mulai = i;
		habis2 = j*(((b/j)*((b/j)+1))/2-(mulai*(mulai-1))/2);
		printf("%lld\n",habis1-habis2);
	}
	return 0;
}
