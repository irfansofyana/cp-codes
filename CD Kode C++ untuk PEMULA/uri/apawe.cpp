#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,x;
	int shasil,hasil;
	bool re=false;
	
	cin>>a>>b>>c;
		if (a!=0)
		{
		while (!re)
		{
		shasil=100*(double(a*b)/c);
		hasil=int(sqrt(shasil));
		cout<<hasil<<endl;
		scanf("%d",&a);
			if (a==0)
				re=true;
			else
				scanf("%d %d",&b,&c);
		}
		}
	return 0;
}