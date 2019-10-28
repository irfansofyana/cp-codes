#include <bits/stdc++.h>
using namespace std;

long long n,i,j;
long long sum,ans,target;
long long bebek[20005];

bool comp(long long a,long long b){
	return a>b;
}
int main(){
	scanf("%lld %lld", &n, &target);
	for (i=0;i<n;i++) 
		scanf("%lld", &bebek[i]);
	sort(bebek,bebek+n,comp);
	for (i=0;i<n && sum<target;i++) {
		ans++;
		sum+=bebek[i];
	}
	printf("%lld\n", ans);
	return 0;
}
