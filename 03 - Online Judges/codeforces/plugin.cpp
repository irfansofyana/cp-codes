#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>s;
	n=s.length()-1;
	for (int i=n;i>=0;i--)
	{
		if (s[i]==s[i-1])
		{
			s.erase(i-1,2);
		}
	}
	cout<<s;
	return 0;
}
