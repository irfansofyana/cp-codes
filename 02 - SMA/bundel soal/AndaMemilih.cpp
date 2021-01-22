#include <bits/stdc++.h>
using namespace std;

int n,k;
double ans;
int A[110];

int main(){
	scanf("%d %d",&n,&k);
	for (int i=0;i<k;i++) 
		scanf("%d",&A[i]);		
	ans = double(n-1-k)/(n*(n-1));
	printf("%.5lf\n",ans);
	return 0;
}
