#include <bits.stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	int shasil,hasil;
	
	cin>>a>>b>>c;
	
	while (a!=0)
	{
		shasil=100*((a*b)/c);
		hasil=int(sqrt(shasil));
		cout<<hasil<<endl;
		cin>>a>>b>>c;
	}
	return 0;
}