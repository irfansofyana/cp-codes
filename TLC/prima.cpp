#include <bits/stdc++.h>
using namespace std;
bool cekprima(long long a)
{
	long long j;
	bool p;
	if (a<=1)
		return false;
	else
	{
		p=true;
		j=2;
		while ((j<=int(sqrt(a))) && (p))
			{
				if (a%j==0)
					p=false;
			}
		if (p)
			return true;
		else
			return false;
	}
}
void primelist()
{
	long long idx=0;
	long long j;
	long long A[77778];
	for (j=1;j<=1000000;j++)
		{
			if (cekprima(j))
				{
					idx++;
					A[idx]=j;
				}
		}
}
int main()
{
	long long t,k,i,n;
	long long x;
	long long A[77778];
	cin>>n;
	primelist();
	for (i=1;i<=n;i++)
		{
			cin>>x;
			cout<<A[x]<<endl;
		}
}