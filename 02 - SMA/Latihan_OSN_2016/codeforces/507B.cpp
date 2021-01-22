#include<bits/stdc++.h>
using namespace std;
double a,b,c,d,e,jarak,k,l;
int main()
{
	cin>>a>>b>>c>>d>>e;
	jarak=sqrt((c-e)*(c-e)+(b-d)*(b-d));
	jarak/=(2*a);
	cout<<ceil(jarak);
}