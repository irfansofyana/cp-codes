#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i,k;
	bool A[100000];
	int B[77777];
	
	for (i=0;i<100000;i++)
		A[i]=true;
	cin>>
	for (i=2;i<10000;i++)
		{
			if (A[i])
				{
					k=0;
					while (i*i+k*i<n)
						{
							A[i*i+k*i]=false;
							k++;
						}
				}
		}
	j=1
	for (i=2;i<10000;i++)
		{
			if (A[i]){
				B[j]=i;
				j++;
			}
		}
}