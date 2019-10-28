#include <bits/stdc++.h>
using namespace std;

int r,i,j;
int A[30000];
int t;
int mini,temp;

int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d",&r);
		for (i=0;i<r;i++)
			scanf("%d",&A[i]);
		sort(A,A+r);
		mini = 1000000000;
		for (i=0;i<r;i++) {
			temp = 0;
			for (j=0;j<r;j++) {
				temp+=abs(A[j]-A[i]);
			}
			if (temp<mini) mini = temp;
		}
		printf("%d\n",mini);
	}
	return 0;
}
