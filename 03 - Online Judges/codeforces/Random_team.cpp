#include <bits/stdc++.h>
using namespace std;

long long n,m,mini,maks,sisa;

int main(){
	scanf("%I64d %I64d",&n,&m);
	if (m==1) printf("%I64d %I64d\n",(n*(n-1))/2,(n*(n-1))/2);
	else {
		maks=(((n-(m-1))*(n-(m-1))+(m-1))-n)/2;
		if (n%m==0) mini=(m*(n/m)*(n/m)-n)/2;
		else {
			sisa=n-((n/m)*m);
		//	cout<<sisa<<endl;
			mini=(sisa*((n/m)+1)*((n/m)+1)+(m-sisa)*(n/m)*(n/m)-n)/2;
		}
		printf("%I64d %I64d\n",mini,maks);
	}
	return 0;
}
