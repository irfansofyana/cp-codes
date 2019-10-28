	#include <bits/stdc++.h>
	using namespace std;
	int main(){
		ios_base::sync_with_stdio(0);
		int n,i,x,y,k,j;
		int jumlah=0,banyak1=0,banyak2=0;
		int A[1000];
		bool p=false;
		
		cin>>n;
		for (i=0;i<n;i++)
			{
				cin>>A[i];
					if (A[i]==100)
						banyak1++;
					else if (A[i]==200)
						banyak2++;
				jumlah+=A[i];
			}
		k=jumlah/2;
		if (k%100!=0)
			cout<<"NO"<<endl;
		else{
			j=k/100;
			for (i=0;i<=(j/2);i++)
				{
					x=j-2*i;
						if ((banyak1>=x) && (banyak2>=i))
							{
								if (100*(banyak1-x)+200*(banyak2-i)==k)
									{
										p=true;
										break;
									}
							}
						
				}
			if (p)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		return 0;
	}