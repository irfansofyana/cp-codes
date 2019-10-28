#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
pair<long long,long long > A[1010];
long long d,x,y;

int main() {
	scanf("%d %lld",&n,&d);
	for (i=0;i<n;i++){
		scanf("%lld %lld",&x,&y);
		A[i] = make_pair(x,y);
	}
	for (i=0;i<n;i++) {
		int temp = 0;
		for (j=0;j<n;j++) {
			if (i!=j) {
				if (abs(A[j].first-A[i].first)+abs(A[j].second-A[i].second)<=d) temp++;
			}
		}
		if (temp==0) ans++; 
	}
	printf("%d\n",ans);
 	return 0;
}

