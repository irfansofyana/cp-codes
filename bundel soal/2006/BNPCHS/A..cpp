#include <bits/stdc++.h>
using namespace std;
long long A[100005];
int ans[100005];
long long n,i,j,temp;

int binary_search(int x,int y,long long k){
	int tengah=(x+y)/2;
	if (x>y) return -1;
	else if (A[tengah]==k) return tengah;
	else if (A[tengah]>k) return binary_search(x,tengah-1,k);
	else if (A[tengah]<k) return binary_search(tengah+1,y,k);
}
int main(){
	int idx=1;
	while (scanf("%lld",&n)!=EOF){
		for (i=0;i<n;i++){
			scanf("%lld",&A[i]);
			temp=A[i];
			sort(A,A+i+1);
			for (j=0;j<i;j++) printf("%lld ",A[j]);
			ans[i]=binary_search(0,i,temp)+1;
		}
		printf("Case #%d\n",idx); idx++;
		for (i=0;i<n;i++) printf("%d\n",ans[i]);
	}
	return 0;
}
