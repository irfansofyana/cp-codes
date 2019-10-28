#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,j,banyak=0,total=0,k,x;
	long long A[102];
	string s;
	
	
	cin>>n>>k;
	for (i=1;i<=n;i++)
		{
			cin>>x;
			ostringstream convert;
			convert<<x;
			s=convert.str();
			banyak=0;
			for (j=0;j<s.length();j++)
				{
					if ((s[j]=='4') || (s[j]=='7'))
						banyak++;
				}
			if (banyak<=k)
				total++;
		}
	cout<<total<<endl;
}