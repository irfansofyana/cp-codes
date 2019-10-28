#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n;
	int b;
	int i;
	double a;

	double hasil;
	
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>a>>b;
				if (b==0) 
					cout<<"divisao impossivel"<<endl;
				else
					{
						hasil=(a/b);
						cout<<fixed<<showpoint;
						cout<<setprecision(1);
						cout<<hasil<<endl;
					}
		}
	return 0;
}