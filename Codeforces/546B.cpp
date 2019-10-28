#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[3005];
int ans;
int udah[9000005];

int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&A[i]);	
	}
	sort(A,A+n);
	memset(udah,false,sizeof udah);
	for (i=0;i<n;i++) {
		if (udah[A[i]]==0) {
			udah[A[i]]++;
		}
		else if (udah[A[i]]>0) {
			j = A[i]+1;
			int temp=1;
			while (udah[j]>0) {
				temp++;
				j++;
			}
			udah[j]++;
			ans+=temp;
		}
	}
	printf("%d\n",ans);
}
