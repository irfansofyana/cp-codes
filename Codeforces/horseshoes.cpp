#include <bits/stdc++.h>
using namespace std;
int main(){
	int temp,berbeda,i,j,min;
	int A[5];
	
	for (i=0;i<=3;i++)
		cin>>A[i];
		
	for (i=0;i<=2;i++){
		min=i;
		for (j=i+1;j<=3;j++){
			if (A[j]<A[min]) 
				min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	berbeda=1;
	for (i=1;i<=3;i++){
		if (A[i]!=A[i-1])
			berbeda++;
	}
	printf("%d\n",(4-berbeda));
}	