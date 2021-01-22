#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,i;
	double A[10000],min,rata,max,jumlah=0,simpangan=0;
	
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>A[i];
			jumlah+=A[i];
			if (i==0){
				min=A[i];
				max=A[i];
			}
			else
				{
					if (A[i]<min)
						min=A[i];
					if (A[i]>max)
						max=A[i];
				}
		}
	rata=jumlah/n;
	for (i=0;i<n;i++)
		{
			simpangan=simpangan+(A[i]-rata)*(A[i]-rata);
		}
	simpangan=sqrt(simpangan/(n-1));
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<min<<" "<<max<<" "<<rata<<" "<<simpangan<<endl;
}