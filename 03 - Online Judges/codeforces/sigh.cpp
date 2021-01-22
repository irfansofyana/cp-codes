#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	int i,j;
	int A[100002],temp;
	
	cin>>n>>k;
	for (i=1;i<=n;i++)
		A[i]=i;
	if (k==0)
		{
			for (i=1;i<=n;i++){
			if (i!=n)
				cout<<A[i]<<" ";
			else
				cout<<A[i]<<endl;
			}
		}
	else
		{
			i=1;
			if (n-k>2){
			if ((n/2)>=k){
			while (k>0)
				{
					temp=A[i];
					A[i]=A[i+1];
					A[i+1]=temp;
					i=i+2;
					k=k-1;
				}
				for (i=1;i<=n;i++){
			if (i!=n)
				cout<<A[i]<<" ";
			else
				cout<<A[i]<<endl;
				}
			}
			else{
			for (i=n;i>=1;i--)
						{
							if ((i==1) && (i!=n-k))
								cout<<A[i]<<endl;
							else if (i!=n-k)
								cout<<A[i]<<" ";
							else if (i==n-k){
								cout<<A[i-1]<<" ";
								break;
							}
						}
			for (i=n-k-1;i>=1;i--)
				{
					if ((i==1) && (i!=n-k))
						cout<<A[i]<<endl;
					if (i==(n-k-1))
						cout<<A[i+1]<<" ";
					else 
				}
			}
			}
			else
				{
					for (i=n;i>=1;i--)
						{
							if (i==1)
								cout<<A[i]<<endl;
							else
								cout<<A[i]<<" ";
						}
				}
		}
	return 0;
}