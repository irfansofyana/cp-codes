#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	int A[100000],kualitas[100000];
	bool p=false;
	
	cin>>n;
	memset(kualitas,0,sizeof(kualitas));
	for (i=0;i<n;i++)
		{
			cin>>A[i]>>k;
			j=A[i];
			kualitas[j]=k;
		}
	sort(A,A+n);
	i=0;
	while ((i<n-1) && (!p))
		{
			if (kualitas[A[i]]>kualitas[A[i+1]])
				p=true;
			else
			i++;
		}
	if (p)
		cout<<"Happy Alex"<<endl;
	else
		cout<<"Poor Alex"<<endl;
}