#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int ans;
int A[1000005];
int frek;

int main(){
	scanf("%d %d",&n,&k);
	for (i=0;i<n;i++) {
		int temp;
		scanf("%d",&temp);
		A[i] = temp%k;
 	}
 	sort(A,A+n);
 	i = 0;
 	while (i<n) {
 		j = i+1;
 		frek = 1;
		while (A[j]==A[i] && j<n) {
 			frek++;
 			j++;
 		}
 		ans += (frek*(frek-1))/2;
 		i = j;
 	}
 	printf("%d\n",ans);
}
