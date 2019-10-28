#include <bits/stdc++.h>
using namespace std;

long long n,i,j,k;
long long A[1000005];
long long ans,idx,maks;

int main(){
	scanf("%lld %lld",&n,&k);
	for (i=0;i<n;i++) 	
		scanf("%lld",&A[i]);
	ans = idx = 1;
	maks = -1;
	for (i=0;i<n;i++) {
		if (i==n-1) {
			if (idx==1) ans+=A[i]+1;
			else {
				ans+=max(maks,A[i])+1;
			}
		}
		else {
			if (idx<=k) {
				maks = max(maks,A[i]);
				if (idx==k) {
					ans+=maks+1;
					idx = 1;
					maks = -1;
				}
				else idx++;
			}
		}
	}
	printf("%lld\n",ans);
}
