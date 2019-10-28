#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x,b,a,i,j,jumlah=0,k;
	
	cin>>a>>b;
	if (b==1)
		cout<<0<<endl;
	else{
		for (i=1;i<=1000000;i++)
			{
				if (i%b==0){
					x=i%b;
					j=i/b;
					k=(j/x)
					if ((k>=1) && (k<=a))
						jumlah+=i;
					if (jumlah>1000000007)
						jumlah=jumlah%1000000007;
				}
			}
		cout<<jumlah<<endl;
	}
}