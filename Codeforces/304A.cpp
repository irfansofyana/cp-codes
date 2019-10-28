#include <bits/stdc++.h>
using namespace std;

long long biaya,k,n,w;

int main(){
	scanf("%I64d %I64d %I64d",&k,&n,&w);
	biaya = ((w*(w+1))/2)*k;
	printf("%I64d\n",biaya>n?biaya-n:0);
	return 0;
}
