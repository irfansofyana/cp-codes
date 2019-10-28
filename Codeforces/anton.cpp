#include <bits/stdc++.h>
using namespace std;
int main(){
	int banyak,i,j,min,k;
	char A[1001];
	char temp;
	string s;

	getline(cin,s);
	if (s.length()==2)
		banyak=0;
	else {
	banyak=1;
	k=0;
	for (i=0;i<=s.length()-1;i++)
		{
			if (i%3==1)
				{
					A[k]=s[i];
					k++;
				}
		}
	k=k-1;
	for (i=0;i<=k-1;i++)
	{
		min=i;
		for (j=i+1;j<=k;j++)
			if ((int(A[j]))<(int(A[min])))
				min=j;
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	for (i=1;i<=k;i++)
		if (A[i]!=A[i-1])
			banyak++;
	}
	printf("%d\n",banyak);
}