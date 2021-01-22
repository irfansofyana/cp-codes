#include <bits/stdc++.h>
using namespace std;
bool cekprima(long long a)
{
	int j;
	bool p=true;
	if (a<=1)
		return false;
	else
		{
			j=2;
			while ((j<=int(sqrt(a))) && (p)){
				if (a%j==0)
					p=false;
				else
				j++;
			}
			if (p)
				return true;
			else
				return false;
		}
}
int main(){
	long long n,banyak=0;
	long long i,j;
	string s="";
	string d,e;
	
	cin>>n;
	if (cekprima(n))
		printf("%d\n",n);
	else {
		for (j=2;j<=n;j++)
			{
				if ((n%j==0) && (cekprima(j)))
					{
						banyak=0;
						while (n%j==0)
							{
								banyak++;
								n=n/j;
							}
						ostringstream convert;
						convert<<j;
						d=convert.str();
						if (banyak==1)
							{
								s=s+d+" "+'x'+" ";
							}
						else
						{
							ostringstream convert;
							convert<<banyak;
							e=convert.str();
							s=s+d+'^'+e+" "+'x'+" ";
						}
						
					}
				
			}
		s.erase(s.length()-3,3);
		cout<<s<<endl;
	}
}