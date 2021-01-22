#include <bits/stdc++.h>
using namespace std;
long long gcd(long long p,long long q){
	if (q==0)
		return p;
	else
		return gcd(q,p%q);
}
int main(){
	ios_base::sync_with_stdio(0);
	long long n,i,j,k;
	long long jawaban;
	long long a,b,c;
	bool udah=true;
	
	cin>>n;
	if (n==1)
		jawaban=1;
	else if (n==2)
		jawaban=2;
	else{
	for (i=n;i>=1;i--){
		a=i;
		for (j=n-1;j>=1;j--){
			b=j;
			for (k=n-2;k>=1;k--){
				if (gcd(a,b)==1 && gcd(a,k)==1 && gcd(b,k)==1){
					udah=false;
					jawaban=a*b*k;				
					break;
				}
			}
			if (udah==false)
				break;
		}
		if (udah==false)
			break;
	}
	}
	cout<<jawaban<<endl;
}
