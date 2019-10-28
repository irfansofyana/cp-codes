#include <bits/stdc++.h>
using namespace std;
string cek1(string s)
{
	int i=0,banyak=0;
	string coba;
	while ((i<=s.length()-1) && ((s[i]=='4') || (s[i]=='7'))){
		banyak++;
	}
	ostringstream convert;
	convert << banyak;
	coba = convert.str();
	return coba;
}
bool cek2(string p)
{
	int i=0;
	bool k=false;
	while ((i<=p.length()-1) && (!k))
		{
			if ((p[i]!='4') && (p[i]!='7'))
				k=true;
			else
			i++;
		}
	if (k)
		return false;
	else
		return true;
}

int main(){
	string n;
	cin>>n;
	if (cek2(cek1(n)))
		printf("YES\n");
	else
		printf("NO\n");
}