#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long a,b;
	long long i,j,jumlah=0;
	long long k,x,m;
	
	cin>>a>>b;
	if (b==1)
		cout<<0<<endl;
	else{
		for (i=1;i<=b-1;i++)
			{
				for (j=1;j<=a;j++)
					{
						x=i*(b*j+1);
						jumlah+=x;
						if (jumlah>1000000007)
							jumlah=jumlah%1000000007;
					}
			}
		cout<<jumlah<<endl;
	}
	return 0;
}