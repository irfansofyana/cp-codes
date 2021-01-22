#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,j,m;
	int A[4];
	char c;
	
	for (i=1;i<=3;i++)
		A[i]=0;
		
	cin>>n;
	for (i=1;i<=n;i++)
		{
		cin>>j>>c;
			switch (c)
			{
			case 'C': 
				A[1]=A[1]+j;
				break;
			case 'R':
				A[2]=A[2]+j;
				break;
			case 'S':
				A[3]=A[3]+j;
				break;
			}
		}
	m=A[1]+A[2]+A[3];
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<"Total: "<<m<<" "<<"cobaias"<<endl;
	cout<<"Total de coelhos: "<<A[1]<<endl;
	cout<<"Total de ratos: "<<A[2]<<endl;
	cout<<"Total de sapos: "<<A[3]<<endl;
	cout<<"Percentual de coelhos: "<<((double(A[1]))/m)*100<<" %"<<endl;
	cout<<"Percentual de ratos: "<<((double(A[2]))/m)*100<<" %"<<endl;
	cout<<"Percentual de sapos: "<<((double(A[3]))/m)*100<<" %"<<endl;
	return 0;
}