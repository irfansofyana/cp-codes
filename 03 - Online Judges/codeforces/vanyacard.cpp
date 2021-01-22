#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	
	int n,x,banyak=0;
	int i,jumlah=0;
	
	cin>>n>>x;
	int A[n];
	for (i=0;i<n;i++)
		{
			cin>>A[i];
			jumlah+=A[i];
		}
			if ((abs(jumlah)<=x) && (jumlah!=0))
				banyak=1; 
			else if (abs(jumlah)>x)
				{
					for (i=2;i<=10000;i++)
						{
							if (i*x>=abs(jumlah))
								{
									banyak=i;
									break;
								}
						}
				}
	cout<<banyak<<endl;
}