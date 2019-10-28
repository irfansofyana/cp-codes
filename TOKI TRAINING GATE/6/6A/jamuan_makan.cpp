#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;
long long n,i,j,ans,last;
pair<int,int> A[MAXN+5];

bool comp(pair<int,int> a,pair<int,int> b) {
	return a.first+a.second-1<b.first+b.second-1;
}

int main(){
	scanf("%lld", &n);
	for (i = 0 ; i < n ; i++) {
		long long x,y;
		scanf("%lld %lld", &x, &y);
		A[i] = make_pair(x,y);
	}
	sort(A,A+n,comp);
	ans = 1;
	for (i = 1 ; i < n ; i++) {
		if (A[i].first>A[last].first+A[last].second-1) {
			ans++;
			last = i;
		}
	}
	printf("%lld\n", ans);
}