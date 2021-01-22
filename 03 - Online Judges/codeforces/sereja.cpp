#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,s=0,d=0,j,min,temp;
	int A[1001];
	
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>A[i];
	
	for (i=1;i<=n-1;i++)
		{
			min=i;
			for (j=i+1;j<=n;j++){
				if (A[j]<A[min]) 
					min=j;
			}
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
		}
	if (n%2==0){
		for (i=1;i<=n;i++){
			if (i%2==1)
				d=d+A[i];
			else
				s=s+A[i];
		}
		printf("%d %d\n",s,d);
	}
	else{
		for (i=1;i<=n;i++){
			if (i%2==1)
				s=s+A[i];
			else
				d=d+A[i];
		}
		printf("%d %d\n",s,d);		
}
return 0;
}