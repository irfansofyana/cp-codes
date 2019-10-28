#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int i,j;
	int x;
	bool cek;

	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cek=true;
			cin>>x;
				for (j=2;j<=static_cast<int>(sqrt(x));j++)
					{
						if (x%j==0)
							cek=false;
					}
			if (cek==true)
				cout<<x<<" eh primo"<<endl;
			else
				cout<<x<<" nao eh primo"<<endl;
		}
	return 0;
}