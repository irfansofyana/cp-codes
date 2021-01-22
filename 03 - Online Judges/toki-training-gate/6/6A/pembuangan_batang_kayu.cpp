#include <bits/stdc++.h>
#define INF 1e9
#define EPS 1e-9
using namespace std;

typedef long long ll;

int n,t,i,j,ans;
int A[50005];

int main(){
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++) 
		scanf("%d", &A[i]);
	i = 0;
	while (i < n) {
		j = i+1;
		while (A[j]>A[j-1] && j-1>=0 ) j++;
		ans = j-1;
		while (A[ans]>A[ans+1] && ans+1<n) ans++;
		printf("%d\n", j);
		i = ans+1;
	}
	return 0;
}
