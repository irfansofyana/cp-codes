#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[105];
int sum,ans;

int main(){
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++)
		scanf("%d",&A[i]);
	i = 1;
	while (i<=n) {
		sum = A[i];
		ans++;
		j = i+1;
		while (sum+A[j]<=m && j<=n) {
			sum+=A[j];
			j++;
		}
		i = j;
	}
	printf("%d\n",ans);
}
