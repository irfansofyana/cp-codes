#include <bits/stdc++.h>
using namespace std;

bool cekprima(long long p)
{
	bool q;
	long long j=2;
	if (p<=1)
		return false;
	else
	{
		q=true;
		while ((j=<static_cast<long long>(sqrt(p)))&&(q))
			{
				if (p%j==0)
					q=false;
				else
				j++;
			}
		return q;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	long long n,i;
	long long x,k;
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>x;
			k=static_cast<long long>(sqrt(x));
			if ((k*k==x) && (cekprima(k)))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	return 0;
}