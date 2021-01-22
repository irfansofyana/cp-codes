#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,i;
	int jum=0;
	double rata;
	
	cin>>x;
	i=1;
		while(x>=0)
			{
				jum=jum+x;
				cin>>x;
				i++;
			}
		rata=double(jum)/(i-1);
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<rata<<endl;
	return 0;
}