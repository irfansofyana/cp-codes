#include <bits/stdc++.h>
using namespace std;

long long t,n,i,j;
long long temp,smt;
long long ans,cnt;
vector<long long> primes;
bool tanda[1000005];
long long pecah[1000005];
long long bil[15];

void generate(){
	memset(tanda,true,sizeof tanda);
	for (i=2;i<=1000000;i++) {
		if (tanda[i]) {
			j = i;
			while (i*j<=1000000) {
				tanda[i*j] = false;
				j++;
			}
			primes.push_back(i);
		}
	}	
	for (i=2;i<=1000000;i++) {
		if (tanda[i]) pecah[i] = 2;
		else {
			temp = i;
			smt = 1;
			for (j=0;j<primes.size();j++) {
				if (temp==1) break;
				else if (tanda[temp]) {
					smt *= 2;
					break;
				}
				else if (temp%primes[j]==0) {
					cnt = 0;
					while (temp%primes[j]==0 && temp>1) {
						cnt++;
						temp/=primes[j];
					}
					smt *= (cnt+1);
				}
			}
			pecah[i] = smt;
		}
	}
}

long long gcd(long long a,long long b){
	long long zz;
	while (b!=0) {
		zz = a;
		a = b;
		b = zz%b;
	}
	return a;
}

int main(){
	scanf("%lld",&t);
	generate();
	while (t--) {
		scanf("%lld",&n);
		ans = 1;
		for (i=0;i<n;i++) 
			scanf("%lld",bil[i]);
		printf("%lld\n",ans);
	}
	return 0;
}
