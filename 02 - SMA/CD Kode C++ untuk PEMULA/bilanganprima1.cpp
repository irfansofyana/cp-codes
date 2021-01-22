#include <bits/stdc++.h>




using namespace std;
int main()
{
	long long a,i,j;
	bool d;
	
	for (i=9000000000;i<=1000000000;i++)
		{
			d=true;
				for (j=2;j<=(static_cast<long long>(sqrt(i)));j++)
					{
						if ((i%j==0))
							cout<<i<<endl;
					}

		}
	return 0;
}

