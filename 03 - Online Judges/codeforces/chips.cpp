#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,m;
	int sisa;
	
	cin>>n>>m;
	i=1;
	sisa=m;
	while (m>=i)
		{
			m=m-i;
			if (i==n)
				i=i-n+1;
			else if (i<n)
				i++;
		}
	cout<<m<<endl;
}