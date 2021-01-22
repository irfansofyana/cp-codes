#include <bits/stdc++.h>
using namespace std;

long long t,n,i,j,ans;
long long A[6],nyala,temp;

long long banyak_cara(long long k){
	return ((k+3)*(k+2)*(k+1))/6;
}

int main(){
	scanf("%lld",&t);
	while (t--) {
		scanf("%lld %lld %lld %lld",&n,&A[0],&A[1],&A[2]);
		ans = 0;
		for (i=1;i<=7;i++) {
			nyala = temp = 0;
			for (j=0;j<3;j++) {
				if ((i&(1<<j))!=0) {
					nyala++;
					temp+=A[j];
				}
			}
			if (temp+nyala<=n) {
				if (nyala%2==1) ans+=banyak_cara(n-temp-nyala);
				else ans-=banyak_cara(n-temp-nyala);
			}
		}
		printf("%lld\n",banyak_cara(n)-ans);
	}
}
