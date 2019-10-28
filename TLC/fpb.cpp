#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B;
	int i,n;
	int temp;
	
	cin>>n;
	int data[n];
	for (i=0;i<n;i++)
		{
			cin>>A>>B;
			while (B>0)
				{
					temp=A%B;
					A=B;
					B=temp;
				}
			data[i]=A;
		}
	for (i=0;i<n;i++)
		printf("%d\n",data[i]);
	return 0;
	
}