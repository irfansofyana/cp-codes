#include <bits/stdc++.h>
using namespace std;
long long n,a,b,i,j;
double ans;
long long fpb(long long p,long long q){
	if (q==0) return p;
	else return fpb(q,p%q);
} 
void divbygcd(long long& a,long long& b){
	long long q=fpb(a,b);
	a/=q;
	b/=q;
}
long long C(int p,int q){
	long long numerator=1,denominator=1;
	long long tomul,todiv;
	if (q>p/2) q=p-q;
	for (int i=q;i;i--){
		tomul=n-q+i;
		todiv=1;
		divbygcd(tomul,todiv);
		divbygcd(numerator,todiv);
		divbygcd(tomul,denominator);
		numerator*=tomul;
		denominator*=todiv;
	}
	return numerator/denominator;
}
double power1(int p){
	if (p==0) return 1;
	else if (p==1) return 0.8;
	else if (p%2==0) return power1(p/2)*power1(p/2);
	else return 0.8*power1(p/2)*power1(p/2);
}
double power2(int p){
	if (p==0) return 1;
	else if (p==1) return 0.25;
	else if (p%2==0) return power2(p/2)*power2(p/2);
	else return power2(p/2)*power2(p/2)*0.25;
}
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a>>b;
		if (b>a) ans=100;
		else{
			ans=0;
			for (j=0;j<=b-1;j++){
				ans+=(C(n,j)*power1(j))/power2(j);
			}
		}
		cout<<fixed<<showpoint;
		cout<<setprecision(4);
		cout<<ans<<endl;
	}
}
