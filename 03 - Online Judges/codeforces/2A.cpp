#include<iostream>
#include <string>
#include<map>
using namespace std;
map<string,int> a,b;
string s[1000];
int c[1000],i, m=0;

int main()
{
	int n;
	cin>>n;
	for(i=0; i<n; i++)
	cin>>s[i]>>c[i],a[s[i]]+=c[i];
	for(i=0; i<n; i++)
		if(a[s[i]]>m) m=a[s[i]];
	for(i=0; m>a[s[i]] || (b[s[i]]+=c[i])<m; i++);
	cout<<s[i];
	return 0;
}
