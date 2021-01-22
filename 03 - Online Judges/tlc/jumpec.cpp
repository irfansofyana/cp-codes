#include <bits/stdc++.h>
using namespace std;

long long fpb(long long p,long long q)
{
	if (q==0)
		return p;
	else	
		return fpb(q,p%q);
}
int main(){
	long long A,B,C,D,k;
	long long E,F;
	cin>>A>>B;
	cin>>C>>D;
	E=A*D+B*C;
	F=B*D;
	k=fpb(E,F);
	if (k>1)
		{
			E=(E/k);
			F=(F/k);
		}
	printf("%lld %lld\n",E,F);
	return 0;
}