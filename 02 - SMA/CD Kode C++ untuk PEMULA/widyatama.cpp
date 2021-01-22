#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i,j,n;
	string A[1000];
	
	scanf("%d",n);
	
	for (i=1;i<=n;i++)
	{
		getline(cin,s);
			for (j=0;j<=s.length()-1;j++)
			{
				if (j%2==0)
					s[j]=static_cast<char>(static_cast<int>(s[j])+2);
			}
		cout<<s<<endl;
	}
}