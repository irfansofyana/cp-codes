#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
int v[]={1,2,3};
int c,temp;
long long nway[1000000];

int main(){
	scanf("%lld",&n);
	c = 2;
	nway[0] = 1;
	for (i=0;i<=c;i++){
		temp = v[i];
		for (j=temp;j<=n;j++){
			nway[j]+=nway[j-temp];
		}
	}
	printf("%lld\n",nway[n]);
}
